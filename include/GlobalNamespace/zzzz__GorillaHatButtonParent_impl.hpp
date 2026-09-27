#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHatButtonParent.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButton_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButtonParent_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHatButton_HatButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaLevelScreen_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButtonParent.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButtonParent::*)()>(&::GlobalNamespace::GorillaHatButtonParent::Start)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x590e834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButtonParent.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButtonParent::*)()>(&::GlobalNamespace::GorillaHatButtonParent::LateUpdate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x590e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButtonParent.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButtonParent::*)(bool, ::GlobalNamespace::GorillaHatButton_HatButtonType, ::StringW)>(&::GlobalNamespace::GorillaHatButtonParent::PressButton)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x590e2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GorillaHatButton_HatButtonType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButtonParent.UpdateButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButtonParent::*)()>(&::GlobalNamespace::GorillaHatButtonParent::UpdateButtonState)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x590ec1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"UpdateButtonState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHatButtonParent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHatButtonParent::*)()>(&::GlobalNamespace::GorillaHatButtonParent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>>& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_hatButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>> const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_hatButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hatButtons;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_hatButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hatButtons = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_adminObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adminObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_adminObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adminObjects;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_adminObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adminObjects = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_hat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hat;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_hat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hat;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_hat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hat = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_face()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_face() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___face;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_face(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___face = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_badge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badge;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_badge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badge;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_badge(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badge = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_leftHandHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandHold;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_leftHandHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandHold;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_leftHandHold(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandHold = value;
}
constexpr ::StringW& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_rightHandHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandHold;
}
constexpr ::StringW const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_rightHandHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandHold;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_rightHandHold(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandHold = value;
}
constexpr bool& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaLevelScreen>& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_screen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr ::UnityW<::GlobalNamespace::GorillaLevelScreen> const& GlobalNamespace::GorillaHatButtonParent::__cordl_internal_get_screen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screen;
}
constexpr void GlobalNamespace::GorillaHatButtonParent::__cordl_internal_set_screen(::UnityW<::GlobalNamespace::GorillaLevelScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screen = value;
}
inline void GlobalNamespace::GorillaHatButtonParent::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHatButtonParent::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHatButtonParent::PressButton(bool  isOn, ::GlobalNamespace::GorillaHatButton_HatButtonType  buttonType, ::StringW  buttonValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GorillaHatButton_HatButtonType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn, buttonType, buttonValue);
}
inline void GlobalNamespace::GorillaHatButtonParent::UpdateButtonState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {"UpdateButtonState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHatButtonParent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHatButtonParent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHatButtonParent* GlobalNamespace::GorillaHatButtonParent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHatButtonParent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHatButtonParent::GorillaHatButtonParent()   {
}
