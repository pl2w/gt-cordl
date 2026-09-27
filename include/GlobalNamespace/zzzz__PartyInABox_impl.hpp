#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyInABox.hpp"
#include "GlobalNamespace/zzzz__PartyInABox_ForceTransform_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PartyInABox_def.hpp"
#include "GlobalNamespace/zzzz__PartyInABox_ForceTransform_def.hpp"
#include "GlobalNamespace/zzzz__SpringyWobbler_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PartyInABox.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56583b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyInABox.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5658478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyInABox.Cranked_ReleaseParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::Cranked_ReleaseParty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x565847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Cranked_ReleaseParty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyInABox.ReleaseParty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::ReleaseParty)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x56584b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"ReleaseParty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyInABox.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5658630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyInABox.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::Reset)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x56583b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyInABox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PartyInABox::*)()>(&::GlobalNamespace::PartyInABox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56586cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::PartyInABox::__cordl_internal_get_parentHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::PartyInABox::__cordl_internal_get_parentHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_parentHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHoldable = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::PartyInABox::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::PartyInABox::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::PartyInABox::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::PartyInABox::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::UnityW<::GlobalNamespace::SpringyWobbler>& GlobalNamespace::PartyInABox::__cordl_internal_get_spring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spring;
}
constexpr ::UnityW<::GlobalNamespace::SpringyWobbler> const& GlobalNamespace::PartyInABox::__cordl_internal_get_spring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spring;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_spring(::UnityW<::GlobalNamespace::SpringyWobbler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spring = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::PartyInABox::__cordl_internal_get_partyAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::PartyInABox::__cordl_internal_get_partyAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyAudio;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_partyAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partyAudio = value;
}
constexpr float_t& GlobalNamespace::PartyInABox::__cordl_internal_get_partyHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyHapticStrength;
}
constexpr float_t const& GlobalNamespace::PartyInABox::__cordl_internal_get_partyHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyHapticStrength;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_partyHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partyHapticStrength = value;
}
constexpr float_t& GlobalNamespace::PartyInABox::__cordl_internal_get_partyHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyHapticDuration;
}
constexpr float_t const& GlobalNamespace::PartyInABox::__cordl_internal_get_partyHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___partyHapticDuration;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_partyHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___partyHapticDuration = value;
}
constexpr bool& GlobalNamespace::PartyInABox::__cordl_internal_get_isReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReleased;
}
constexpr bool const& GlobalNamespace::PartyInABox::__cordl_internal_get_isReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isReleased;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_isReleased(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isReleased = value;
}
constexpr ::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform>& GlobalNamespace::PartyInABox::__cordl_internal_get_forceTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceTransforms;
}
constexpr ::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform> const& GlobalNamespace::PartyInABox::__cordl_internal_get_forceTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceTransforms;
}
constexpr void GlobalNamespace::PartyInABox::__cordl_internal_set_forceTransforms(::ArrayW<::GlobalNamespace::PartyInABox_ForceTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceTransforms = value;
}
inline void GlobalNamespace::PartyInABox::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyInABox::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyInABox::Cranked_ReleaseParty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Cranked_ReleaseParty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyInABox::ReleaseParty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"ReleaseParty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyInABox::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyInABox::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PartyInABox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PartyInABox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PartyInABox* GlobalNamespace::PartyInABox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PartyInABox*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PartyInABox::PartyInABox()   {
}
