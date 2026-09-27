#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderScanKiosk.hpp"
#include "GlobalNamespace/zzzz__BuilderScanKiosk_ScannerState_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderScanKiosk_def.hpp"
#include "GlobalNamespace/zzzz__BuilderScanKiosk_ScannerState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.IsSaveSlotValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::BuilderScanKiosk::IsSaveSlotValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57d7f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"IsSaveSlotValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::Start)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x57d7fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnEnable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57d887c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnDisable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57d892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnDestroy)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x57d89dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnNoneButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnNoneButtonPressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57d8e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnNoneButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnScanButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)(::GlobalNamespace::GorillaPressableButton*, bool)>(&::GlobalNamespace::BuilderScanKiosk::OnScanButtonPressed)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57d8f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnScanButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnDevScanPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnDevScanPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57d90a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnDevScanPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.LoadPlayerPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::LoadPlayerPrefs)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57d849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"LoadPlayerPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.SavePlayerPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::SavePlayerPrefs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57d8efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"SavePlayerPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.ToggleSaveButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)(bool)>(&::GlobalNamespace::BuilderScanKiosk::ToggleSaveButton)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57d90a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"ToggleSaveButton", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::Tick)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57d9118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnSavePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnSavePressed)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x57d91f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSavePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.GetSavePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::GetSavePath)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x57d948c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"GetSavePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.GetSaveFolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::GetSaveFolder)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57d9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"GetSaveFolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnSaveDirtyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)(bool)>(&::GlobalNamespace::BuilderScanKiosk::OnSaveDirtyChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57d9760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveDirtyChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnSaveTimeUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnSaveTimeUpdated)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57d9768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveTimeUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnSaveSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::OnSaveSuccess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57d9774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.OnSaveFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)(::StringW)>(&::GlobalNamespace::BuilderScanKiosk::OnSaveFail)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57d9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveFail", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.UpdateUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::UpdateUI)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x57d8524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"UpdateUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk.GetTextForScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::GetTextForScreen)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0x57d97a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"GetTextForScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderScanKiosk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderScanKiosk::*)()>(&::GlobalNamespace::BuilderScanKiosk::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57da19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_saveButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_saveButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveButton;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_saveButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_noneButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noneButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_noneButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noneButton;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_noneButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noneButton = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>* const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanButtons;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_scanButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPressableButton>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanButtons = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_targetTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTable;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_targetTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTable;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_targetTable(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTable = value;
}
constexpr float_t& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_saveCooldownSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveCooldownSeconds;
}
constexpr float_t const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_saveCooldownSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveCooldownSeconds;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_saveCooldownSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveCooldownSeconds = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_screenText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_screenText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenText;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_screenText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenText = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_soundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_soundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBank;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_soundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBank = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanAnimation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanAnimation;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_scanAnimation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanAnimation = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanTriangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanTriangle;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanTriangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanTriangle;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_scanTriangle(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanTriangle = value;
}
constexpr bool& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_isAnimating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAnimating;
}
constexpr bool const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_isAnimating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAnimating;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_isAnimating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAnimating = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_buildCaptureTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildCaptureTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_buildCaptureTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buildCaptureTexture;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_buildCaptureTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buildCaptureTexture = value;
}
constexpr bool& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_isDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr bool const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_isDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDirty;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_isDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDirty = value;
}
constexpr bool& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_saveError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveError;
}
constexpr bool const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_saveError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveError;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_saveError(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveError = value;
}
constexpr ::StringW& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_errorMsg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMsg;
}
constexpr ::StringW const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_errorMsg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMsg;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_errorMsg(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorMsg = value;
}
constexpr bool& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_coolingDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolingDown;
}
constexpr bool const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_coolingDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolingDown;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_coolingDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolingDown = value;
}
constexpr double_t& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_coolDownCompleteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDownCompleteTime;
}
constexpr double_t const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_coolDownCompleteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDownCompleteTime;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_coolDownCompleteTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDownCompleteTime = value;
}
constexpr double_t& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanCompleteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanCompleteTime;
}
constexpr double_t const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scanCompleteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanCompleteTime;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_scanCompleteTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanCompleteTime = value;
}
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scannerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scannerState;
}
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState const& GlobalNamespace::BuilderScanKiosk::__cordl_internal_get_scannerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scannerState;
}
constexpr void GlobalNamespace::BuilderScanKiosk::__cordl_internal_set_scannerState(::GlobalNamespace::BuilderScanKiosk_ScannerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scannerState = value;
}
inline void GlobalNamespace::BuilderScanKiosk::setStaticF_playerPrefKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "playerPrefKey", ::GlobalNamespace::BuilderScanKiosk*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BuilderScanKiosk::getStaticF_playerPrefKey()  {
return ::cordl_internals::getStaticField<::StringW, "playerPrefKey", ::GlobalNamespace::BuilderScanKiosk*>();
}
inline void GlobalNamespace::BuilderScanKiosk::setStaticF_SAVE_FOLDER(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SAVE_FOLDER", ::GlobalNamespace::BuilderScanKiosk*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BuilderScanKiosk::getStaticF_SAVE_FOLDER()  {
return ::cordl_internals::getStaticField<::StringW, "SAVE_FOLDER", ::GlobalNamespace::BuilderScanKiosk*>();
}
inline void GlobalNamespace::BuilderScanKiosk::setStaticF_SAVE_FILE(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SAVE_FILE", ::GlobalNamespace::BuilderScanKiosk*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::BuilderScanKiosk::getStaticF_SAVE_FILE()  {
return ::cordl_internals::getStaticField<::StringW, "SAVE_FILE", ::GlobalNamespace::BuilderScanKiosk*>();
}
inline void GlobalNamespace::BuilderScanKiosk::setStaticF_NUM_SAVE_SLOTS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "NUM_SAVE_SLOTS", ::GlobalNamespace::BuilderScanKiosk*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BuilderScanKiosk::getStaticF_NUM_SAVE_SLOTS()  {
return ::cordl_internals::getStaticField<int32_t, "NUM_SAVE_SLOTS", ::GlobalNamespace::BuilderScanKiosk*>();
}
inline void GlobalNamespace::BuilderScanKiosk::setStaticF_DEV_SAVE_SLOT(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DEV_SAVE_SLOT", ::GlobalNamespace::BuilderScanKiosk*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BuilderScanKiosk::getStaticF_DEV_SAVE_SLOT()  {
return ::cordl_internals::getStaticField<int32_t, "DEV_SAVE_SLOT", ::GlobalNamespace::BuilderScanKiosk*>();
}
inline bool GlobalNamespace::BuilderScanKiosk::IsSaveSlotValid(int32_t  slot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"IsSaveSlotValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, slot);
}
inline void GlobalNamespace::BuilderScanKiosk::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnNoneButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnNoneButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnScanButtonPressed(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnScanButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isLeft);
}
inline void GlobalNamespace::BuilderScanKiosk::OnDevScanPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnDevScanPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::LoadPlayerPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"LoadPlayerPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::SavePlayerPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"SavePlayerPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::ToggleSaveButton(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"ToggleSaveButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GlobalNamespace::BuilderScanKiosk::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnSavePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSavePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BuilderScanKiosk::GetSavePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"GetSavePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BuilderScanKiosk::GetSaveFolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"GetSaveFolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnSaveDirtyChanged(bool  dirty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveDirtyChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dirty);
}
inline void GlobalNamespace::BuilderScanKiosk::OnSaveTimeUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveTimeUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnSaveSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::OnSaveFail(::StringW  errorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"OnSaveFail", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMsg);
}
inline void GlobalNamespace::BuilderScanKiosk::UpdateUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"UpdateUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BuilderScanKiosk::GetTextForScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {"GetTextForScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderScanKiosk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderScanKiosk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderScanKiosk* GlobalNamespace::BuilderScanKiosk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderScanKiosk*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderScanKiosk::BuilderScanKiosk()   {
}
