#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_SendUpgradeEmailScreen.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SendUpgradeEmailScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AnimatedEllipsis_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MessageScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen.SendUpgradeEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::SendUpgradeEmail)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a5a488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"SendUpgradeEmail", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen.OnCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::*)()>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::OnCancel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a5ad34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"OnCancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen.OnSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::*)()>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::OnSuccess)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a5ad6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"OnSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen.OnFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::*)(::StringW)>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::OnFailure)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5a5ada4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"OnFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::*)()>(&::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5ade8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__animatedEllipsis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedEllipsis;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__animatedEllipsis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedEllipsis;
}
constexpr void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_set__animatedEllipsis(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatedEllipsis = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__successScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____successScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen> const& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__successScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____successScreen;
}
constexpr void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_set__successScreen(::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____successScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__errorScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen> const& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__errorScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorScreen;
}
constexpr void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_set__errorScreen(::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__mainScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_get__mainScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreen;
}
constexpr void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::__cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainScreen = value;
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::KIDUI_SendUpgradeEmailScreen::SendUpgradeEmail(::System::Collections::Generic::List_1<::StringW>*  requestedPermissions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"SendUpgradeEmail", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, requestedPermissions);
}
inline void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::OnCancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"OnCancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::OnSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"OnSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::OnFailure(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {"OnFailure", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline void GlobalNamespace::KIDUI_SendUpgradeEmailScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen* GlobalNamespace::KIDUI_SendUpgradeEmailScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen::KIDUI_SendUpgradeEmailScreen()   {
}
