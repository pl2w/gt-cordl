#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIHideOnControlScheme.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIHideOnControlScheme_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::*)()>(&::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::OnEnable)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9fb4960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::*)()>(&::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9fb4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme.OnSwappedToController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::*)(bool)>(&::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::OnSwappedToController)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9fb4a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {"OnSwappedToController", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::*)()>(&::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_get__showOnController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showOnController;
}
constexpr bool const& Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_get__showOnController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showOnController;
}
constexpr void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_set__showOnController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showOnController = value;
}
constexpr bool& Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_get__showOnKBM()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showOnKBM;
}
constexpr bool const& Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_get__showOnKBM() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showOnKBM;
}
constexpr void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_set__showOnKBM(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showOnKBM = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_get__objectsToHide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectsToHide;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_get__objectsToHide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectsToHide;
}
constexpr void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::__cordl_internal_set__objectsToHide(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectsToHide = value;
}
inline void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::OnSwappedToController(bool  isController)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {"OnSwappedToController", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isController);
}
inline void Modio::Unity::UI::Input::ModioUIHideOnControlScheme::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme* Modio::Unity::UI::Input::ModioUIHideOnControlScheme::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme::ModioUIHideOnControlScheme()   {
}
