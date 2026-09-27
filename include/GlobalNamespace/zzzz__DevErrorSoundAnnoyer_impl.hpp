#pragma once
// IWYU pragma private; include "GlobalNamespace/DevErrorSoundAnnoyer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevErrorSoundAnnoyer_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevErrorSoundAnnoyer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevErrorSoundAnnoyer::*)()>(&::GlobalNamespace::DevErrorSoundAnnoyer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevErrorSoundAnnoyer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_errorSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_errorSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorSound;
}
constexpr void GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_set_errorSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_errorUIText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorUIText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_errorUIText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorUIText;
}
constexpr void GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_set_errorUIText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorUIText = value;
}
constexpr ::UnityW<::UnityEngine::Font>& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_errorFont()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorFont;
}
constexpr ::UnityW<::UnityEngine::Font> const& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_errorFont() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorFont;
}
constexpr void GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_set_errorFont(::UnityW<::UnityEngine::Font>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorFont = value;
}
constexpr ::StringW& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_displayedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedText;
}
constexpr ::StringW const& GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_get_displayedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayedText;
}
constexpr void GlobalNamespace::DevErrorSoundAnnoyer::__cordl_internal_set_displayedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayedText = value;
}
inline void GlobalNamespace::DevErrorSoundAnnoyer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevErrorSoundAnnoyer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevErrorSoundAnnoyer* GlobalNamespace::DevErrorSoundAnnoyer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevErrorSoundAnnoyer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevErrorSoundAnnoyer::DevErrorSoundAnnoyer()   {
}
