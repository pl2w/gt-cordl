#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersCageDepositShim.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersCageDepositShim_def.hpp"
#include "GlobalNamespace/zzzz__CrittersCageDeposit_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDepositShim.CopySpawnerDataInPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersCageDeposit> (::GlobalNamespace::CrittersCageDepositShim::*)()>(&::GlobalNamespace::CrittersCageDepositShim::CopySpawnerDataInPrefab)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x55fdf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDepositShim*>(),
                        {"CopySpawnerDataInPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDepositShim.ReplaceSpawnerWithShim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDepositShim::*)()>(&::GlobalNamespace::CrittersCageDepositShim::ReplaceSpawnerWithShim)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x55fe184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDepositShim*>(),
                        {"ReplaceSpawnerWithShim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersCageDepositShim._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersCageDepositShim::*)()>(&::GlobalNamespace::CrittersCageDepositShim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fe28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDepositShim*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_cageBoxCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cageBoxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_cageBoxCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cageBoxCollider;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_cageBoxCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cageBoxCollider = value;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_type(::GlobalNamespace::CrittersActor_CrittersActorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr bool& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_disableGrabOnAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrabOnAttach;
}
constexpr bool const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_disableGrabOnAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrabOnAttach;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_disableGrabOnAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGrabOnAttach = value;
}
constexpr bool& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_allowMultiAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowMultiAttach;
}
constexpr bool const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_allowMultiAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowMultiAttach;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_allowMultiAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowMultiAttach = value;
}
constexpr bool& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_snapOnAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOnAttach;
}
constexpr bool const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_snapOnAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapOnAttach;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_snapOnAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapOnAttach = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_startLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_startLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLocation;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_startLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startLocation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_endLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endLocation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_endLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endLocation;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_endLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endLocation = value;
}
constexpr float_t& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_submitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitDuration;
}
constexpr float_t const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_submitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitDuration;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_submitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submitDuration = value;
}
constexpr float_t& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_returnDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDuration;
}
constexpr float_t const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_returnDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnDuration;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_returnDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositAudio;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_depositAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositStartSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositStartSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositStartSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositStartSound;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_depositStartSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositStartSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositEmptySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEmptySound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositEmptySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositEmptySound;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_depositEmptySound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositEmptySound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositCritterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositCritterSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_depositCritterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositCritterSound;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_depositCritterSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositCritterSound = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_attachPointTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_attachPointTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPointTransform;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_attachPointTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachPointTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_visiblePlatformTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visiblePlatformTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersCageDepositShim::__cordl_internal_get_visiblePlatformTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visiblePlatformTransform;
}
constexpr void GlobalNamespace::CrittersCageDepositShim::__cordl_internal_set_visiblePlatformTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visiblePlatformTransform = value;
}
inline ::UnityW<::GlobalNamespace::CrittersCageDeposit> GlobalNamespace::CrittersCageDepositShim::CopySpawnerDataInPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDepositShim*>(),
                        {"CopySpawnerDataInPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersCageDeposit>>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCageDepositShim::ReplaceSpawnerWithShim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDepositShim*>(),
                        {"ReplaceSpawnerWithShim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersCageDepositShim::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersCageDepositShim*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersCageDepositShim* GlobalNamespace::CrittersCageDepositShim::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersCageDepositShim*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersCageDepositShim::CrittersCageDepositShim()   {
}
