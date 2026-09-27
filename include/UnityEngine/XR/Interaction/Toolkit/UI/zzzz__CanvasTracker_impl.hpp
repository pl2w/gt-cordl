#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/CanvasTracker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__CanvasTracker_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker.get_transformDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::get_transformDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"get_transformDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker.set_transformDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::set_transformDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"set_transformDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb430afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker.OnTransformParentChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb430b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb430b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::__cordl_internal_get__transformDirty_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformDirty_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::__cordl_internal_get__transformDirty_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformDirty_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::__cordl_internal_set__transformDirty_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformDirty_k__BackingField = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::get_transformDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"get_transformDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::set_transformDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"set_transformDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {"OnTransformParentChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker* UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::CanvasTracker::CanvasTracker()   {
}
