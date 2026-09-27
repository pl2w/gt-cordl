#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/MenuToggler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__MenuToggler_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.get_HeadAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::get_HeadAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"get_HeadAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.set_HeadAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::MenuToggler::set_HeadAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42ec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"set_HeadAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.get_SpawnOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::get_SpawnOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa42ec0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"get_SpawnOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.set_SpawnOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::MenuToggler::set_SpawnOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa42ec18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"set_SpawnOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa42ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa42ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa42ed68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.TogglePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::TogglePanel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa42ee48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"TogglePanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.HidePanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::HidePanel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa42ed4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"HidePanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.ShowPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::ShowPanel)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa42ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"ShowPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.InjectAllAUIToggler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Locomotion::MenuToggler::InjectAllAUIToggler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"InjectAllAUIToggler", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.InjectPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Locomotion::MenuToggler::InjectPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"InjectPanel", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler.InjectOptionalCloseButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)(::UnityEngine::UI::Button*)>(&::Oculus::Interaction::Locomotion::MenuToggler::InjectOptionalCloseButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"InjectOptionalCloseButton", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::MenuToggler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::MenuToggler::*)()>(&::Oculus::Interaction::Locomotion::MenuToggler::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa42f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panel;
}
constexpr void Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_set__panel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeButton = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__headAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__headAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headAnchor;
}
constexpr void Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_set__headAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headAnchor = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__spawnOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__spawnOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnOffset;
}
constexpr void Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_set__spawnOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnOffset = value;
}
constexpr bool& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::MenuToggler::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Locomotion::MenuToggler::get_HeadAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"get_HeadAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::set_HeadAnchor(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"set_HeadAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::MenuToggler::get_SpawnOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"get_SpawnOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::set_SpawnOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"set_SpawnOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::TogglePanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"TogglePanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::HidePanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"HidePanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::ShowPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"ShowPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::InjectAllAUIToggler(::UnityEngine::GameObject*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"InjectAllAUIToggler", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::InjectPanel(::UnityEngine::GameObject*  panel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"InjectPanel", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::InjectOptionalCloseButton(::UnityEngine::UI::Button*  closeButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {"InjectOptionalCloseButton", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeButton);
}
inline void Oculus::Interaction::Locomotion::MenuToggler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::MenuToggler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::MenuToggler* Oculus::Interaction::Locomotion::MenuToggler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::MenuToggler*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::MenuToggler::MenuToggler()   {
}
