#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabTitleDataTextDisplay.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayFabTitleDataTextDisplay_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.get_playFabKeyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::get_playFabKeyValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59a2670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"get_playFabKeyValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::Start)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x59a2678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x59a2970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnDisable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a2aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnPlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnPlayFabError)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x59a2b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnLanguageChanged)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x59a2e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnTitleDataRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::StringW)>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnTitleDataRequestComplete)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59a2f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnTitleDataRequestComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnNewTitleDataAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::StringW)>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnNewTitleDataAdded)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59a310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnNewTitleDataAdded", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::OnDestroy)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59a31b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::BuildValidationCheck)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59a328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay.ChangeTitleDataAtRuntime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)(::StringW)>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::ChangeTitleDataAtRuntime)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x59a3344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"ChangeTitleDataAtRuntime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayFabTitleDataTextDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayFabTitleDataTextDisplay::*)()>(&::GlobalNamespace::PlayFabTitleDataTextDisplay::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59a35c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_textBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textBox;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_textBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textBox;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set_textBox(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textBox = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_newUpdateColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newUpdateColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_newUpdateColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newUpdateColor;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set_newUpdateColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newUpdateColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_defaultTextColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_defaultTextColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultTextColor;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set_defaultTextColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultTextColor = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_playfabKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabKey;
}
constexpr ::StringW const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_playfabKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabKey;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set_playfabKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabKey = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_fallbackText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackText;
}
constexpr ::StringW const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get_fallbackText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackText;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set_fallbackText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackText = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get__fallbackLocalizedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackLocalizedText;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get__fallbackLocalizedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackLocalizedText;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set__fallbackLocalizedText(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallbackLocalizedText = value;
}
constexpr bool& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get__hasRegisteredCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRegisteredCallback;
}
constexpr bool const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get__hasRegisteredCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRegisteredCallback;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set__hasRegisteredCallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasRegisteredCallback = value;
}
constexpr ::StringW& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get__cachedText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedText;
}
constexpr ::StringW const& GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_get__cachedText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedText;
}
constexpr void GlobalNamespace::PlayFabTitleDataTextDisplay::__cordl_internal_set__cachedText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedText = value;
}
inline ::StringW GlobalNamespace::PlayFabTitleDataTextDisplay::get_playFabKeyValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"get_playFabKeyValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnPlayFabError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnLanguageChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnTitleDataRequestComplete(::StringW  titleDataResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnTitleDataRequestComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, titleDataResult);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnNewTitleDataAdded(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnNewTitleDataAdded", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayFabTitleDataTextDisplay::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::ChangeTitleDataAtRuntime(::StringW  newTitleDataKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {"ChangeTitleDataAtRuntime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTitleDataKey);
}
inline void GlobalNamespace::PlayFabTitleDataTextDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayFabTitleDataTextDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayFabTitleDataTextDisplay* GlobalNamespace::PlayFabTitleDataTextDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayFabTitleDataTextDisplay*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::PlayFabTitleDataTextDisplay::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::PlayFabTitleDataTextDisplay::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayFabTitleDataTextDisplay::PlayFabTitleDataTextDisplay()   {
}
