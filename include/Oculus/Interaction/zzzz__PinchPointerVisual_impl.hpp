#pragma once
// IWYU pragma private; include "Oculus/Interaction/PinchPointerVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__PinchPointerVisual_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.get_LocalOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::get_LocalOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa453c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_LocalOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.set_LocalOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PinchPointerVisual::set_LocalOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa453c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_LocalOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.get_RemapCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::get_RemapCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_RemapCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.set_RemapCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::AnimationCurve*)>(&::Oculus::Interaction::PinchPointerVisual::set_RemapCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_RemapCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.get_AlphaRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::get_AlphaRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_AlphaRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.set_AlphaRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::PinchPointerVisual::set_AlphaRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa453c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_AlphaRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.get_Tint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::get_Tint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa453c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_Tint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.set_Tint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Color)>(&::Oculus::Interaction::PinchPointerVisual::set_Tint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa453c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_Tint", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa453c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa453d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::OnEnable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa453d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::OnDisable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa453f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.SetPositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Oculus::Interaction::PinchPointerVisual::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4540f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"SetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.HandleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&::Oculus::Interaction::PinchPointerVisual::HandleStateChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4541a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.HandlePostprocessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::HandlePostprocessed)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa4541d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"HandlePostprocessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(bool, float_t)>(&::Oculus::Interaction::PinchPointerVisual::UpdateColor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa454374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"UpdateColor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.InjectAllPinchPointerVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::Oculus::Interaction::IInteractor*, ::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::PinchPointerVisual::InjectAllPinchPointerVisual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa454400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"InjectAllPinchPointerVisual", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.InjectInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::Oculus::Interaction::IInteractor*)>(&::Oculus::Interaction::PinchPointerVisual::InjectInteractor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa45442c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual.InjectSkinnedMeshRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)(::UnityEngine::SkinnedMeshRenderer*)>(&::Oculus::Interaction::PinchPointerVisual::InjectSkinnedMeshRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4544f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"InjectSkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PinchPointerVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PinchPointerVisual::*)()>(&::Oculus::Interaction::PinchPointerVisual::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa454500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactor;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactor = value;
}
constexpr ::Oculus::Interaction::IInteractor*& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr ::Oculus::Interaction::IInteractor* const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Interactor;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Interactor = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__skinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__skinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinnedMeshRenderer;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinnedMeshRenderer = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__localOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__localOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localOffset;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__localOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localOffset = value;
}
constexpr ::UnityEngine::AnimationCurve*& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__remapCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__remapCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remapCurve;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__remapCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remapCurve = value;
}
constexpr ::UnityEngine::Vector2& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__alphaRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaRange;
}
constexpr ::UnityEngine::Vector2 const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__alphaRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alphaRange;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__alphaRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alphaRange = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__tint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tint;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__tint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tint;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__tint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tint = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__progress(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr ::Oculus::Interaction::Input::IAxis1D*& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr ::Oculus::Interaction::Input::IAxis1D* const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set_Progress(::Oculus::Interaction::Input::IAxis1D*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr bool& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PinchPointerVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PinchPointerVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PinchPointerVisual::get_LocalOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_LocalOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::set_LocalOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_LocalOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* Oculus::Interaction::PinchPointerVisual::get_RemapCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_RemapCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::set_RemapCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_RemapCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::PinchPointerVisual::get_AlphaRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_AlphaRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::set_AlphaRange(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_AlphaRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::PinchPointerVisual::get_Tint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"get_Tint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::set_Tint(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"set_Tint", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PinchPointerVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"SetPositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void Oculus::Interaction::PinchPointerVisual::HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateArgs);
}
inline void Oculus::Interaction::PinchPointerVisual::HandlePostprocessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"HandlePostprocessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PinchPointerVisual::UpdateColor(bool  highlight, float_t  mappedPinchStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"UpdateColor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, highlight, mappedPinchStrength);
}
inline void Oculus::Interaction::PinchPointerVisual::InjectAllPinchPointerVisual(::Oculus::Interaction::IInteractor*  interactor, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"InjectAllPinchPointerVisual", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>(), ::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, skinnedMeshRenderer);
}
inline void Oculus::Interaction::PinchPointerVisual::InjectInteractor(::Oculus::Interaction::IInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"InjectInteractor", {}, {::i2c::type_of<::Oculus::Interaction::IInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::PinchPointerVisual::InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {"InjectSkinnedMeshRenderer", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, skinnedMeshRenderer);
}
inline void Oculus::Interaction::PinchPointerVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PinchPointerVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PinchPointerVisual* Oculus::Interaction::PinchPointerVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PinchPointerVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PinchPointerVisual::PinchPointerVisual()   {
}
