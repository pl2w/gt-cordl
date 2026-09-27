#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIPromptIconResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIPromptIconResolver_def.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIPromptIconResolver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIPromptIconResolver.TryGetKeyboardIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityW<::UnityEngine::Sprite>,::StringW> (::Modio::Unity::UI::Input::ModioUIPromptIconResolver::*)(::StringW)>(&::Modio::Unity::UI::Input::ModioUIPromptIconResolver::TryGetKeyboardIcon)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9fb6164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>(),
                        {"TryGetKeyboardIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIPromptIconResolver.ResolveIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::Modio::Unity::UI::Input::ModioUIPromptIconResolver::*)(::StringW, ::UnityEngine::RuntimePlatform)>(&::Modio::Unity::UI::Input::ModioUIPromptIconResolver::ResolveIcon)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9fb6230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>(),
                        {"ResolveIcon", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::RuntimePlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIPromptIconResolver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIPromptIconResolver::*)()>(&::Modio::Unity::UI::Input::ModioUIPromptIconResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>& Modio::Unity::UI::Input::ModioUIPromptIconResolver::__cordl_internal_get__platforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platforms;
}
constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver::__cordl_internal_get__platforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platforms;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver::__cordl_internal_set__platforms(::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____platforms = value;
}
constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>& Modio::Unity::UI::Input::ModioUIPromptIconResolver::__cordl_internal_get__keyboardMappings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardMappings;
}
constexpr ::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver::__cordl_internal_get__keyboardMappings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____keyboardMappings;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver::__cordl_internal_set__keyboardMappings(::ArrayW<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____keyboardMappings = value;
}
inline ::System::ValueTuple_2<::UnityW<::UnityEngine::Sprite>,::StringW> Modio::Unity::UI::Input::ModioUIPromptIconResolver::TryGetKeyboardIcon(::StringW  controlPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>(),
                        {"TryGetKeyboardIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityW<::UnityEngine::Sprite>,::StringW>>(this, ___internal_method, controlPath);
}
inline ::UnityW<::UnityEngine::Sprite> Modio::Unity::UI::Input::ModioUIPromptIconResolver::ResolveIcon(::StringW  controlPath, ::UnityEngine::RuntimePlatform  forControllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>(),
                        {"ResolveIcon", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::RuntimePlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, controlPath, forControllerType);
}
inline void Modio::Unity::UI::Input::ModioUIPromptIconResolver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIPromptIconResolver* Modio::Unity::UI::Input::ModioUIPromptIconResolver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIPromptIconResolver*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIPromptIconResolver::ModioUIPromptIconResolver()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites.GetSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::*)(::StringW)>(&::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::GetSprite)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x9fb6304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>(),
                        {"GetSprite", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::*)()>(&::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb698c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_forControllerTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forControllerTypes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>* const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_forControllerTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forControllerTypes;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_forControllerTypes(::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forControllerTypes = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonSouth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSouth;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonSouth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonSouth;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_buttonSouth(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonSouth = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonNorth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonNorth;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonNorth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonNorth;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_buttonNorth(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonNorth = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonEast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonEast;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonEast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonEast;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_buttonEast(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonEast = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonWest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonWest;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_buttonWest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonWest;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_buttonWest(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonWest = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_startButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startButton;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_startButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startButton;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_startButton(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startButton = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_selectButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectButton;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_selectButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectButton;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_selectButton(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectButton = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftTrigger;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftTrigger;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_leftTrigger(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftTrigger = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightTrigger;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightTrigger;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_rightTrigger(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightTrigger = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftShoulder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftShoulder;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftShoulder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftShoulder;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_leftShoulder(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftShoulder = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightShoulder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightShoulder;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightShoulder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightShoulder;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_rightShoulder(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightShoulder = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpad;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpad;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_dpad(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpad = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadUp;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadUp;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_dpadUp(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadUp = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadDown;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadDown;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_dpadDown(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadDown = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadLeft;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadLeft;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_dpadLeft(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadLeft = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadRight;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_dpadRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dpadRight;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_dpadRight(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dpadRight = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftStick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftStick;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftStick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftStick;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_leftStick(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftStick = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightStick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightStick;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightStick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightStick;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_rightStick(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightStick = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftStickPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftStickPress;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_leftStickPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftStickPress;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_leftStickPress(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftStickPress = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightStickPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightStickPress;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_get_rightStickPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightStickPress;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::__cordl_internal_set_rightStickPress(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightStickPress = value;
}
inline ::UnityW<::UnityEngine::Sprite> Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::GetSprite(::StringW  controlPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>(),
                        {"GetSprite", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, controlPath);
}
inline void Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites* Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_PlatformSprites::ModioUIPromptIconResolver_PlatformSprites()   {
}
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::*)()>(&::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb6908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_get_controlPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPath;
}
constexpr ::StringW const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_get_controlPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlPath;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_set_controlPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlPath = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_get_icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_get_icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___icon = value;
}
constexpr ::StringW& Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_get_displayAsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayAsText;
}
constexpr ::StringW const& Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_get_displayAsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayAsText;
}
constexpr void Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::__cordl_internal_set_displayAsText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayAsText = value;
}
inline void Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping* Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIPromptIconResolver_KeyboardMapping::ModioUIPromptIconResolver_KeyboardMapping()   {
}
