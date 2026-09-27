#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTapOverrides.hpp"
#include "GorillaTag/zzzz__HashWrapper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HandTapOverrides_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandTapOverrides._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandTapOverrides::*)()>(&::GlobalNamespace::HandTapOverrides::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5653214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapOverrides*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::HandTapOverrides::__cordl_internal_get_overrideSurfacePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSurfacePrefab;
}
constexpr bool const& GlobalNamespace::HandTapOverrides::__cordl_internal_get_overrideSurfacePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSurfacePrefab;
}
constexpr void GlobalNamespace::HandTapOverrides::__cordl_internal_set_overrideSurfacePrefab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideSurfacePrefab = value;
}
constexpr ::GorillaTag::HashWrapper& GlobalNamespace::HandTapOverrides::__cordl_internal_get_surfaceTapPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceTapPrefab;
}
constexpr ::GorillaTag::HashWrapper const& GlobalNamespace::HandTapOverrides::__cordl_internal_get_surfaceTapPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceTapPrefab;
}
constexpr void GlobalNamespace::HandTapOverrides::__cordl_internal_set_surfaceTapPrefab(::GorillaTag::HashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceTapPrefab = value;
}
constexpr bool& GlobalNamespace::HandTapOverrides::__cordl_internal_get_overrideGamemodePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideGamemodePrefab;
}
constexpr bool const& GlobalNamespace::HandTapOverrides::__cordl_internal_get_overrideGamemodePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideGamemodePrefab;
}
constexpr void GlobalNamespace::HandTapOverrides::__cordl_internal_set_overrideGamemodePrefab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideGamemodePrefab = value;
}
constexpr ::GorillaTag::HashWrapper& GlobalNamespace::HandTapOverrides::__cordl_internal_get_gamemodeTapPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamemodeTapPrefab;
}
constexpr ::GorillaTag::HashWrapper const& GlobalNamespace::HandTapOverrides::__cordl_internal_get_gamemodeTapPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamemodeTapPrefab;
}
constexpr void GlobalNamespace::HandTapOverrides::__cordl_internal_set_gamemodeTapPrefab(::GorillaTag::HashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamemodeTapPrefab = value;
}
constexpr bool& GlobalNamespace::HandTapOverrides::__cordl_internal_get_overrideSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSound;
}
constexpr bool const& GlobalNamespace::HandTapOverrides::__cordl_internal_get_overrideSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSound;
}
constexpr void GlobalNamespace::HandTapOverrides::__cordl_internal_set_overrideSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::HandTapOverrides::__cordl_internal_get_tapSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::HandTapOverrides::__cordl_internal_get_tapSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapSound;
}
constexpr void GlobalNamespace::HandTapOverrides::__cordl_internal_set_tapSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapSound = value;
}
inline void GlobalNamespace::HandTapOverrides::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HandTapOverrides*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandTapOverrides* GlobalNamespace::HandTapOverrides::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandTapOverrides*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandTapOverrides::HandTapOverrides()   {
}
