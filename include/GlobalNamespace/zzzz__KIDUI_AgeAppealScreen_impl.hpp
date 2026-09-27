#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AgeAppealScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealScreen::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a45a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealScreen.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealScreen::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a45a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealScreen::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a45a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealScreen.ShowRestrictedAccessScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealScreen::ShowRestrictedAccessScreen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a45ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"ShowRestrictedAccessScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealScreen.OnChangeAgePressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealScreen::OnChangeAgePressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a45ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"OnChangeAgePressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_AgeAppealScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_AgeAppealScreen::*)()>(&::GlobalNamespace::KIDUI_AgeAppealScreen::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a45b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__changeAgeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeAgeButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__changeAgeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeAgeButton;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_set__changeAgeButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changeAgeButton = value;
}
constexpr int32_t& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__minimumDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumDelay;
}
constexpr int32_t const& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__minimumDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minimumDelay;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_set__minimumDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minimumDelay = value;
}
constexpr ::StringW& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__submittedEmailAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____submittedEmailAddress;
}
constexpr ::StringW const& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__submittedEmailAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____submittedEmailAddress;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_set__submittedEmailAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____submittedEmailAddress = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_get__cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::KIDUI_AgeAppealScreen::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationTokenSource = value;
}
inline void GlobalNamespace::KIDUI_AgeAppealScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealScreen::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealScreen::ShowRestrictedAccessScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"ShowRestrictedAccessScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealScreen::OnChangeAgePressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {"OnChangeAgePressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_AgeAppealScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_AgeAppealScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_AgeAppealScreen* GlobalNamespace::KIDUI_AgeAppealScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_AgeAppealScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_AgeAppealScreen::KIDUI_AgeAppealScreen()   {
}
