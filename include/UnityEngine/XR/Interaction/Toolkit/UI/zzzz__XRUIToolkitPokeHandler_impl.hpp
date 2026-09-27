#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIToolkitPokeHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIToolkitPokeHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRPokeFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRPokeInteractor_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.get_updateDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::get_updateDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44320c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"get_updateDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.set_updateDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::set_updateDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb443214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"set_updateDepth", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb44321c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb44324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.ProcessPokeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)(::UnityEngine::Collider*, ::UnityEngine::Transform*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, bool, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::ProcessPokeInteraction)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0xb443324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"ProcessPokeInteraction", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.ResetPointerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::ResetPointerState)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb443d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"ResetPointerState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.PerformPick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::PerformPick)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb443bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"PerformPick", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.PerformMultiPick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::PerformMultiPick)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xb443e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"PerformMultiPick", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.UpdateVisualizersState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::UpdateVisualizersState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4442a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"UpdateVisualizersState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.UpdateVisualizers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::UpdateVisualizers)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb4439e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"UpdateVisualizers", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.CreateVisualizers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::CreateVisualizers)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0xb4442e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"CreateVisualizers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler.DestroyVisualizers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::DestroyVisualizers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb443250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"DestroyVisualizers", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_VisualizersRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualizersRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_VisualizersRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualizersRoot;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_VisualizersRoot(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisualizersRoot = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_PokePointVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokePointVisualizer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_PokePointVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PokePointVisualizer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_PokePointVisualizer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PokePointVisualizer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_ClosestPointVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClosestPointVisualizer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_ClosestPointVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClosestPointVisualizer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_ClosestPointVisualizer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClosestPointVisualizer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_RayOriginVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayOriginVisualizer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_RayOriginVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayOriginVisualizer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_RayOriginVisualizer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayOriginVisualizer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_NormalVisualizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NormalVisualizer;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_NormalVisualizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NormalVisualizer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_NormalVisualizer(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NormalVisualizer = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_VisualizersCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualizersCreated;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_VisualizersCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualizersCreated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_VisualizersCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisualizersCreated = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor>& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor> const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_Interactor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_UpdateDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateDepth;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_get_m_UpdateDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateDepth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::__cordl_internal_set_m_UpdateDepth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateDepth = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::get_updateDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"get_updateDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::set_updateDepth(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"set_updateDepth", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::_ctor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::ProcessPokeInteraction(::UnityEngine::Collider*  hitCollider, ::UnityEngine::Transform*  interactableTransform, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, bool  useMultiPick, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  pokeFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"ProcessPokeInteraction", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitCollider, interactableTransform, interactable, useMultiPick, pokeFilter);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::ResetPointerState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"ResetPointerState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::PerformPick(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  direction, float_t  radius, bool  useMultiPick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"PerformPick", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, document, center, direction, radius, useMultiPick);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::PerformMultiPick(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  direction, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"PerformMultiPick", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method, document, center, direction, radius);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::UpdateVisualizersState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"UpdateVisualizersState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::UpdateVisualizers(::UnityEngine::Vector3  pokePoint, ::UnityEngine::Vector3  closestPoint, ::UnityEngine::Vector3  rayOrigin, ::UnityEngine::Vector3  normal, ::UnityEngine::Transform*  parentTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"UpdateVisualizers", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pokePoint, closestPoint, rayOrigin, normal, parentTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::CreateVisualizers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"CreateVisualizers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::DestroyVisualizers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(),
                        {"DestroyVisualizers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler* UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::New_ctor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRPokeInteractor*  interactor)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler*>(interactor));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::XRUIToolkitPokeHandler::XRUIToolkitPokeHandler()   {
}
