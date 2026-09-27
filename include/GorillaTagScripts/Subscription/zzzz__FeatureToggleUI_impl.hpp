#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/FeatureToggleUI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FeatureToggleUI_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButtonContainer_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FeatureToggleUI_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__FeatureTogglesScreen_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.get_ButtonContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> (::GorillaTagScripts::Subscription::FeatureToggleUI::*)()>(&::GorillaTagScripts::Subscription::FeatureToggleUI::get_ButtonContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf620c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"get_ButtonContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.set_ButtonContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)(::GlobalNamespace::SITouchscreenButtonContainer*)>(&::GorillaTagScripts::Subscription::FeatureToggleUI::set_ButtonContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf6214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"set_ButtonContainer", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButtonContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.get_LabelText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Subscription::FeatureToggleUI::*)()>(&::GorillaTagScripts::Subscription::FeatureToggleUI::get_LabelText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"get_LabelText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.set_LabelText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)(::StringW)>(&::GorillaTagScripts::Subscription::FeatureToggleUI::set_LabelText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf623c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"set_LabelText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)()>(&::GorillaTagScripts::Subscription::FeatureToggleUI::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bf625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.AttachToFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*)>(&::GorillaTagScripts::Subscription::FeatureToggleUI::AttachToFeature)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5bf5e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"AttachToFeature", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.OnPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)(int32_t, ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*)>(&::GorillaTagScripts::Subscription::FeatureToggleUI::OnPressed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bf62cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"OnPressed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI.OnToggled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)(int32_t, ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*, bool)>(&::GorillaTagScripts::Subscription::FeatureToggleUI::OnToggled)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bf63a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"OnToggled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI::*)()>(&::GorillaTagScripts::Subscription::FeatureToggleUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5bf64d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__ButtonContainer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ButtonContainer_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> const& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__ButtonContainer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ButtonContainer_k__BackingField;
}
constexpr void GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_set__ButtonContainer_k__BackingField(::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ButtonContainer_k__BackingField = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____label;
}
constexpr void GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_set__label(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____label = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__unavailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unavailable;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__unavailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unavailable;
}
constexpr void GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_set__unavailable(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unavailable = value;
}
constexpr float_t& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__disableUntil()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableUntil;
}
constexpr float_t const& GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_get__disableUntil() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableUntil;
}
constexpr void GorillaTagScripts::Subscription::FeatureToggleUI::__cordl_internal_set__disableUntil(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableUntil = value;
}
inline ::UnityW<::GlobalNamespace::SITouchscreenButtonContainer> GorillaTagScripts::Subscription::FeatureToggleUI::get_ButtonContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"get_ButtonContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::set_ButtonContainer(::GlobalNamespace::SITouchscreenButtonContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"set_ButtonContainer", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButtonContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaTagScripts::Subscription::FeatureToggleUI::get_LabelText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"get_LabelText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::set_LabelText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"set_LabelText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::AttachToFeature(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"AttachToFeature", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::OnPressed(int32_t  actorNr, ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"OnPressed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr, feature);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::OnToggled(int32_t  actorNr, ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  feature, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {"OnToggled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr, feature, state);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::FeatureToggleUI* GorillaTagScripts::Subscription::FeatureToggleUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FeatureToggleUI*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FeatureToggleUI::FeatureToggleUI()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::*)()>(&::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf62c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0._AttachToFeature_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::_AttachToFeature_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>(),
                        {"<AttachToFeature>b__0", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0._AttachToFeature_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::_AttachToFeature_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bf6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>(),
                        {"<AttachToFeature>b__1", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>& GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI> const& GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::FeatureToggleUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*& GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::__cordl_internal_get_feature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feature;
}
constexpr ::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature* const& GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::__cordl_internal_get_feature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___feature;
}
constexpr void GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::__cordl_internal_set_feature(::GorillaTagScripts::Subscription::FeatureTogglesScreen_Feature*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___feature = value;
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::_AttachToFeature_b__0(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  nr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>(),
                        {"<AttachToFeature>b__0", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data, nr);
}
inline void GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::_AttachToFeature_b__1(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  nr, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>(),
                        {"<AttachToFeature>b__1", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data, nr, state);
}
inline ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0* GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::FeatureToggleUI___c__DisplayClass12_0::FeatureToggleUI___c__DisplayClass12_0()   {
}
