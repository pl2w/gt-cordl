#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/FeatureTogglesScreen.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FeatureToggleUI_impl.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionFeatures_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FeatureTogglesScreen_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButtonContainer_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FeatureTogglesScreen_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.get_NumPages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::get_NumPages)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"get_NumPages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.get_LastPageIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::get_LastPageIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bf5a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"get_LastPageIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bf5b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.OnNextButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::OnNextButtonPressed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bf5ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnNextButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.OnBackButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::OnBackButtonPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bf5cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnBackButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.OnExitButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::OnExitButtonPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf5d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnExitButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::SliceUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bf5d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bf5e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.UpdateFeatureToggleUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::UpdateFeatureToggleUI)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bf5d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"UpdateFeatureToggleUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen.MarkDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::MarkDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf5c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"MarkDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf6184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__features()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____features;
}
constexpr ::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*> const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__features() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____features;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__features(::ArrayW<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____features = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__nextButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextButton;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__nextButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextButton;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__nextButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextButton = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__backButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backButton;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__backButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backButton;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__backButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backButton = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__exitButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitButton;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__exitButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitButton;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__exitButton(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exitButton = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>>& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__featureToggleUi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToggleUi;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>> const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__featureToggleUi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureToggleUi;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__featureToggleUi(::ArrayW<::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureToggleUi = value;
}
constexpr int32_t& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__currentPage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPage;
}
constexpr int32_t const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__currentPage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPage;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__currentPage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPage = value;
}
constexpr bool& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__dirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirty;
}
constexpr bool const& GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_get__dirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dirty;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen::__cordl_internal_set__dirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dirty = value;
}
inline int32_t GorillaTagScripts::Subscription::FeatureTogglesScreen::get_NumPages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"get_NumPages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::Subscription::FeatureTogglesScreen::get_LastPageIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"get_LastPageIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::OnNextButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnNextButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data, actorNr);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::OnBackButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnBackButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data, actorNr);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::OnExitButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnExitButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data, actorNr);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::UpdateFeatureToggleUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"UpdateFeatureToggleUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::MarkDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {"MarkDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::FeatureTogglesScreen* GorillaTagScripts::Subscription::FeatureTogglesScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FeatureTogglesScreen*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTagScripts::Subscription::FeatureTogglesScreen::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTagScripts::Subscription::FeatureTogglesScreen::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FeatureTogglesScreen::FeatureTogglesScreen()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::*)()>(&::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bf6194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures const& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_set_Value(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_OnPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPressed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_OnPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPressed;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_set_OnPressed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPressed = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_OnToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnToggle;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_OnToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnToggle;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_set_OnToggle(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnToggle = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_UnavailableMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnavailableMessage;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_get_UnavailableMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnavailableMessage;
}
constexpr void GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::__cordl_internal_set_UnavailableMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnavailableMessage = value;
}
inline void GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature* GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature::FeatureTogglesScreen_Feature()   {
}
