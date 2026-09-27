#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceInput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WorldSpaceInput_PickResult_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Ray)>(&::UnityEngine::UIElements::WorldSpaceInput::Pick3D)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb8b506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"Pick3D", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Ray, ::by_ref<float_t>)>(&::UnityEngine::UIElements::WorldSpaceInput::Pick3D)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb8ac484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"Pick3D", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PickDocument3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WorldSpaceInput_PickResult (*)(::UnityEngine::Ray, float_t, int32_t)>(&::UnityEngine::UIElements::WorldSpaceInput::PickDocument3D)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0xb8abc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PickDocument3D", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.Pick_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::WorldSpaceInput::Pick_Internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb8b5100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"Pick_Internal", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::WorldSpaceInput::PerformPick)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb8b5220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::WorldSpaceInput::PerformPick2D)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb8b52a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick2D", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::WorldSpaceInput::PerformPick3D)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb8b5300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick3D", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.PerformPick2D_LocalPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*)>(&::UnityEngine::UIElements::WorldSpaceInput::PerformPick2D_LocalPoint)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb8b55e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick2D_LocalPoint", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.GetPicking3DWorldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::WorldSpaceInput::GetPicking3DWorldBounds)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb8b401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"GetPicking3DWorldBounds", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::WorldSpaceInput.GetPicking3DLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::WorldSpaceInput::GetPicking3DLocalBounds)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb8b518c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"GetPicking3DLocalBounds", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::Pick3D(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Ray  worldRay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"Pick3D", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, document, worldRay);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::Pick3D(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Ray  worldRay, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"Pick3D", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, document, worldRay, distance);
}
inline ::GlobalNamespace::WorldSpaceInput_PickResult UnityEngine::UIElements::WorldSpaceInput::PickDocument3D(::UnityEngine::Ray  worldRay, float_t  maxDistance, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PickDocument3D", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WorldSpaceInput_PickResult>(nullptr, ___internal_method, worldRay, maxDistance, layerMask);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::Pick_Internal(::UnityEngine::UIElements::UIDocument*  document, ::UnityEngine::Ray  documentRay, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"Pick_Internal", {}, {::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, document, documentRay, outResults);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::PerformPick(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, ray, outResults);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::PerformPick2D(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick2D", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, ray, outResults);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::PerformPick3D(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Ray  ray, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  outResults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick3D", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, ray, outResults);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::WorldSpaceInput::PerformPick2D_LocalPoint(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::Vector3  localPoint, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  picked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"PerformPick2D_LocalPoint", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(nullptr, ___internal_method, root, localPoint, picked);
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::WorldSpaceInput::GetPicking3DWorldBounds(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"GetPicking3DWorldBounds", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, ve);
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::WorldSpaceInput::GetPicking3DLocalBounds(::UnityEngine::UIElements::VisualElement*  ve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::WorldSpaceInput*>(),
                        {"GetPicking3DLocalBounds", {}, {::i2c::type_of<::UnityEngine::UIElements::VisualElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, ve);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::WorldSpaceInput::WorldSpaceInput()   {
}
