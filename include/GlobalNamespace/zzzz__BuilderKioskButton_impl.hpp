#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderKioskButton.hpp"
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderKioskButton_def.hpp"
#include "GlobalNamespace/zzzz__BuilderKiosk_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderKioskButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderKioskButton::*)()>(&::GlobalNamespace::BuilderKioskButton::Start)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57be710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderKioskButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderKioskButton::*)()>(&::GlobalNamespace::BuilderKioskButton::UpdateColor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57be77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderKioskButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderKioskButton::*)(bool)>(&::GlobalNamespace::BuilderKioskButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57be808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(),
                    {::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderKioskButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderKioskButton::*)()>(&::GlobalNamespace::BuilderKioskButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57be810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem& GlobalNamespace::BuilderKioskButton::__cordl_internal_get_currentPieceSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPieceSet;
}
constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem const& GlobalNamespace::BuilderKioskButton::__cordl_internal_get_currentPieceSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPieceSet;
}
constexpr void GlobalNamespace::BuilderKioskButton::__cordl_internal_set_currentPieceSet(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPieceSet = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderKiosk>& GlobalNamespace::BuilderKioskButton::__cordl_internal_get_kiosk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kiosk;
}
constexpr ::UnityW<::GlobalNamespace::BuilderKiosk> const& GlobalNamespace::BuilderKioskButton::__cordl_internal_get_kiosk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kiosk;
}
constexpr void GlobalNamespace::BuilderKioskButton::__cordl_internal_set_kiosk(::UnityW<::GlobalNamespace::BuilderKiosk>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kiosk = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::BuilderKioskButton::__cordl_internal_get_setNameText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setNameText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::BuilderKioskButton::__cordl_internal_get_setNameText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setNameText;
}
constexpr void GlobalNamespace::BuilderKioskButton::__cordl_internal_set_setNameText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setNameText = value;
}
inline void GlobalNamespace::BuilderKioskButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderKioskButton::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderKioskButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::BuilderKioskButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderKioskButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderKioskButton* GlobalNamespace::BuilderKioskButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderKioskButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderKioskButton::BuilderKioskButton()   {
}
