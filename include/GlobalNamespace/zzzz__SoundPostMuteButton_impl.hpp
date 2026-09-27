#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundPostMuteButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_impl.hpp"
#include "GlobalNamespace/zzzz__SoundPostMuteButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundPostMuteButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundPostMuteButton::*)()>(&::GlobalNamespace::SoundPostMuteButton::ButtonActivation)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59a6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SoundPostMuteButton*>(),
                    {::i2c::class_of<::GlobalNamespace::SoundPostMuteButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundPostMuteButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundPostMuteButton::*)()>(&::GlobalNamespace::SoundPostMuteButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a6888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundPostMuteButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>>& GlobalNamespace::SoundPostMuteButton::__cordl_internal_get_musicControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>> const& GlobalNamespace::SoundPostMuteButton::__cordl_internal_get_musicControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___musicControllers;
}
constexpr void GlobalNamespace::SoundPostMuteButton::__cordl_internal_set_musicControllers(::ArrayW<::UnityW<::GlobalNamespace::SynchedMusicController>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___musicControllers = value;
}
constexpr bool& GlobalNamespace::SoundPostMuteButton::__cordl_internal_get_IsDummyButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDummyButton;
}
constexpr bool const& GlobalNamespace::SoundPostMuteButton::__cordl_internal_get_IsDummyButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsDummyButton;
}
constexpr void GlobalNamespace::SoundPostMuteButton::__cordl_internal_set_IsDummyButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsDummyButton = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundPostMuteButton>& GlobalNamespace::SoundPostMuteButton::__cordl_internal_get__targetMuteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMuteButton;
}
constexpr ::UnityW<::GlobalNamespace::SoundPostMuteButton> const& GlobalNamespace::SoundPostMuteButton::__cordl_internal_get__targetMuteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMuteButton;
}
constexpr void GlobalNamespace::SoundPostMuteButton::__cordl_internal_set__targetMuteButton(::UnityW<::GlobalNamespace::SoundPostMuteButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetMuteButton = value;
}
inline void GlobalNamespace::SoundPostMuteButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SoundPostMuteButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundPostMuteButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundPostMuteButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundPostMuteButton* GlobalNamespace::SoundPostMuteButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundPostMuteButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundPostMuteButton::SoundPostMuteButton()   {
}
