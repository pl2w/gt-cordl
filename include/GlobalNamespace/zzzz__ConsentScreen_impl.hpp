#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_PopupState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_def.hpp"
#include "GlobalNamespace/zzzz__ConsentHoldButton_def.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_ConsentCost_def.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_PopupState_def.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen__OnAsyncWorkComplete_d__31_def.hpp"
#include "GlobalNamespace/zzzz__ConsentScreen_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::Awake)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5a6b0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::OnDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a6b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.StartConsentFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*, ::System::Action_2<bool,::System::Action_1<::StringW>*>*)>(&::GlobalNamespace::ConsentScreen::StartConsentFlow)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a6b444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"StartConsentFlow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*>(), ::i2c::type_of<::System::Action_2<bool,::System::Action_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.ShowPrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*, ::System::Action_2<bool,::System::Action_1<::StringW>*>*)>(&::GlobalNamespace::ConsentScreen::ShowPrompt)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a6b660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ShowPrompt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*>(), ::i2c::type_of<::System::Action_2<bool,::System::Action_1<::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.PlayAppearCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::PlayAppearCue)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a6c1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"PlayAppearCue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.ComposePrompt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*)>(&::GlobalNamespace::ConsentScreen::ComposePrompt)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5a6b7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ComposePrompt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.OnChoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)(bool)>(&::GlobalNamespace::ConsentScreen::OnChoice)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a6c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"OnChoice", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.OnAsyncWorkComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)(::StringW)>(&::GlobalNamespace::ConsentScreen::OnAsyncWorkComplete)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a6c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"OnAsyncWorkComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::Hide)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a6c4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"Hide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.SetButtonsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)(bool)>(&::GlobalNamespace::ConsentScreen::SetButtonsVisible)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a6bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"SetButtonsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.ShowResultText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)(::StringW)>(&::GlobalNamespace::ConsentScreen::ShowResultText)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a6c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ShowResultText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::Update)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a6c5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a6c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.UpdatePopupTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::UpdatePopupTransform)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x5a6bb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"UpdatePopupTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.ResolveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)()>(&::GlobalNamespace::ConsentScreen::ResolveHead)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a6c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ResolveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.ResolveWatchAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::ResolveWatchAnchor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5a6c798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ResolveWatchAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen.ResolvePlayerScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GlobalNamespace::ConsentScreen::ResolvePlayerScale)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5a6c978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ResolvePlayerScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a6cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen._Awake_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::_Awake_b__24_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"<Awake>b__24_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen._Awake_b__24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen::*)()>(&::GlobalNamespace::ConsentScreen::_Awake_b__24_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6cc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"<Awake>b__24_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::ConsentScreen::__cordl_internal_get_popupRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_popupRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupRoot;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_popupRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popupRoot = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ConsentScreen::__cordl_internal_get_promptText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_promptText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptText;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_promptText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promptText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ConsentScreen::__cordl_internal_get_resultText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_resultText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultText;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_resultText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultText = value;
}
constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton>& GlobalNamespace::ConsentScreen::__cordl_internal_get_yesButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yesButton;
}
constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_yesButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yesButton;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_yesButton(::UnityW<::GlobalNamespace::ConsentHoldButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yesButton = value;
}
constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton>& GlobalNamespace::ConsentScreen::__cordl_internal_get_noButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noButton;
}
constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_noButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noButton;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_noButton(::UnityW<::GlobalNamespace::ConsentHoldButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noButton = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_resultDisplaySeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultDisplaySeconds;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_resultDisplaySeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultDisplaySeconds;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_resultDisplaySeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultDisplaySeconds = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_dismissDistanceMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismissDistanceMeters;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_dismissDistanceMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismissDistanceMeters;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_dismissDistanceMeters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dismissDistanceMeters = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::ConsentScreen::__cordl_internal_get_appearSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearSound;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_appearSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearSound;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_appearSound(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appearSound = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_appearHapticScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearHapticScale;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_appearHapticScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearHapticScale;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_appearHapticScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appearHapticScale = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_appearHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearHapticDuration;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_appearHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___appearHapticDuration;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_appearHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___appearHapticDuration = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_hoverHeightMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverHeightMeters;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_hoverHeightMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverHeightMeters;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_hoverHeightMeters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverHeightMeters = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_faceOffsetMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceOffsetMeters;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_faceOffsetMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceOffsetMeters;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_faceOffsetMeters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceOffsetMeters = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_fallbackForwardMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackForwardMeters;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_fallbackForwardMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackForwardMeters;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_fallbackForwardMeters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackForwardMeters = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_fallbackDownMeters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackDownMeters;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_fallbackDownMeters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackDownMeters;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_fallbackDownMeters(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackDownMeters = value;
}
constexpr ::StringW& GlobalNamespace::ConsentScreen::__cordl_internal_get_processingText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingText;
}
constexpr ::StringW const& GlobalNamespace::ConsentScreen::__cordl_internal_get_processingText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___processingText;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_processingText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___processingText = value;
}
constexpr ::GlobalNamespace::ConsentScreen_PopupState& GlobalNamespace::ConsentScreen::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::ConsentScreen_PopupState const& GlobalNamespace::ConsentScreen::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_state(::GlobalNamespace::ConsentScreen_PopupState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Action_2<bool,::System::Action_1<::StringW>*>*& GlobalNamespace::ConsentScreen::__cordl_internal_get_pendingCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCallback;
}
constexpr ::System::Action_2<bool,::System::Action_1<::StringW>*>* const& GlobalNamespace::ConsentScreen::__cordl_internal_get_pendingCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingCallback;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_pendingCallback(::System::Action_2<bool,::System::Action_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingCallback = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConsentScreen::__cordl_internal_get_promptOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptOrigin;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConsentScreen::__cordl_internal_get_promptOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promptOrigin;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_promptOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promptOrigin = value;
}
constexpr bool& GlobalNamespace::ConsentScreen::__cordl_internal_get_hasPromptOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPromptOrigin;
}
constexpr bool const& GlobalNamespace::ConsentScreen::__cordl_internal_get_hasPromptOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPromptOrigin;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_hasPromptOrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPromptOrigin = value;
}
constexpr float_t& GlobalNamespace::ConsentScreen::__cordl_internal_get_resultHideAt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultHideAt;
}
constexpr float_t const& GlobalNamespace::ConsentScreen::__cordl_internal_get_resultHideAt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultHideAt;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_resultHideAt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultHideAt = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ConsentScreen::__cordl_internal_get_watchAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ConsentScreen::__cordl_internal_get_watchAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchAnchor;
}
constexpr void GlobalNamespace::ConsentScreen::__cordl_internal_set_watchAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchAnchor = value;
}
inline void GlobalNamespace::ConsentScreen::setStaticF__activeReference(::UnityW<::GlobalNamespace::ConsentScreen>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ConsentScreen>, "_activeReference", ::GlobalNamespace::ConsentScreen*>(std::forward<::UnityW<::GlobalNamespace::ConsentScreen>>(value));
}
inline ::UnityW<::GlobalNamespace::ConsentScreen> GlobalNamespace::ConsentScreen::getStaticF__activeReference()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ConsentScreen>, "_activeReference", ::GlobalNamespace::ConsentScreen*>();
}
inline void GlobalNamespace::ConsentScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::StartConsentFlow(::StringW  itemDisplayName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*  costs, ::System::Action_2<bool,::System::Action_1<::StringW>*>*  OnConsentChosen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"StartConsentFlow", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*>(), ::i2c::type_of<::System::Action_2<bool,::System::Action_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, itemDisplayName, costs, OnConsentChosen);
}
inline void GlobalNamespace::ConsentScreen::ShowPrompt(::StringW  itemDisplayName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*  costs, ::System::Action_2<bool,::System::Action_1<::StringW>*>*  onConsentChosen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ShowPrompt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*>(), ::i2c::type_of<::System::Action_2<bool,::System::Action_1<::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemDisplayName, costs, onConsentChosen);
}
inline void GlobalNamespace::ConsentScreen::PlayAppearCue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"PlayAppearCue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConsentScreen::ComposePrompt(::StringW  itemDisplayName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ComposePrompt", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, itemDisplayName, costs);
}
inline void GlobalNamespace::ConsentScreen::OnChoice(bool  consented)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"OnChoice", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, consented);
}
inline void GlobalNamespace::ConsentScreen::OnAsyncWorkComplete(::StringW  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"OnAsyncWorkComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GlobalNamespace::ConsentScreen::Hide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"Hide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::SetButtonsVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"SetButtonsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::ConsentScreen::ShowResultText(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ShowResultText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::ConsentScreen::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::UpdatePopupTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"UpdatePopupTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::ConsentScreen::ResolveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ResolveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::ConsentScreen::ResolveWatchAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ResolveWatchAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline float_t GlobalNamespace::ConsentScreen::ResolvePlayerScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"ResolvePlayerScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::_Awake_b__24_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"<Awake>b__24_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen::_Awake_b__24_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen*>(),
                        {"<Awake>b__24_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConsentScreen* GlobalNamespace::ConsentScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsentScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsentScreen::ConsentScreen()   {
}
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen___c::*)()>(&::GlobalNamespace::ConsentScreen___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6cc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConsentScreen___c._StartConsentFlow_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConsentScreen___c::*)(::StringW)>(&::GlobalNamespace::ConsentScreen___c::_StartConsentFlow_b__26_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a6cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen___c*>(),
                        {"<StartConsentFlow>b__26_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConsentScreen___c::setStaticF___9(::GlobalNamespace::ConsentScreen___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ConsentScreen___c*, "<>9", ::GlobalNamespace::ConsentScreen___c*>(std::forward<::GlobalNamespace::ConsentScreen___c*>(value));
}
inline ::GlobalNamespace::ConsentScreen___c* GlobalNamespace::ConsentScreen___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ConsentScreen___c*, "<>9", ::GlobalNamespace::ConsentScreen___c*>();
}
inline void GlobalNamespace::ConsentScreen___c::setStaticF___9__26_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__26_0", ::GlobalNamespace::ConsentScreen___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::ConsentScreen___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__26_0", ::GlobalNamespace::ConsentScreen___c*>();
}
inline void GlobalNamespace::ConsentScreen___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConsentScreen___c::_StartConsentFlow_b__26_0(::StringW  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConsentScreen___c*>(),
                        {"<StartConsentFlow>b__26_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::ConsentScreen___c* GlobalNamespace::ConsentScreen___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConsentScreen___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConsentScreen___c::ConsentScreen___c()   {
}
