#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankSO.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__SoundBankSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundBankSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankSO::*)()>(&::GlobalNamespace::SoundBankSO::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b0f448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SoundBankSO::__cordl_internal_get_sounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SoundBankSO::__cordl_internal_get_sounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sounds;
}
constexpr void GlobalNamespace::SoundBankSO::__cordl_internal_set_sounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sounds = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SoundBankSO::__cordl_internal_get_volumeRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SoundBankSO::__cordl_internal_get_volumeRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumeRange;
}
constexpr void GlobalNamespace::SoundBankSO::__cordl_internal_set_volumeRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumeRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::SoundBankSO::__cordl_internal_get_pitchRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::SoundBankSO::__cordl_internal_get_pitchRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchRange;
}
constexpr void GlobalNamespace::SoundBankSO::__cordl_internal_set_pitchRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchRange = value;
}
inline void GlobalNamespace::SoundBankSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundBankSO* GlobalNamespace::SoundBankSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundBankSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundBankSO::SoundBankSO()   {
}
