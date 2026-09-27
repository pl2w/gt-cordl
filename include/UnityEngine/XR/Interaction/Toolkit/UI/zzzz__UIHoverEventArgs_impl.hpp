#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/UIHoverEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs.get_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::get_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs.set_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::set_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs.get_deviceModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::get_deviceModel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb43f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"get_deviceModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs.set_deviceModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::set_deviceModel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb43f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"set_deviceModel", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs.get_uiObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::get_uiObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"get_uiObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs.set_uiObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::set_uiObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb43f0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"set_uiObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb43f0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*& UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_get__interactorObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* const& UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_get__interactorObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorObject_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel& UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_get__deviceModel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceModel_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel const& UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_get__deviceModel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deviceModel_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_set__deviceModel_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deviceModel_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_get__uiObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiObject_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_get__uiObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uiObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::__cordl_internal_set__uiObject_k__BackingField(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uiObject_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::get_interactorObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::get_deviceModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"get_deviceModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::set_deviceModel(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"set_deviceModel", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::get_uiObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"get_uiObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::set_uiObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {"set_uiObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs* UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs::UIHoverEventArgs()   {
}
