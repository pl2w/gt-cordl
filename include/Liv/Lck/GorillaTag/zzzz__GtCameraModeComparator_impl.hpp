#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCameraModeComparator.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraModeComparator_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSelectorsGroup_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCameraModeComparator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCameraModeComparator::*)()>(&::Liv::Lck::GorillaTag::GtCameraModeComparator::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d21790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCameraModeComparator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCameraModeComparator::*)()>(&::Liv::Lck::GorillaTag::GtCameraModeComparator::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d21834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCameraModeComparator.EvaluateTargetModeSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCameraModeComparator::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::Liv::Lck::GorillaTag::GtCameraModeComparator::EvaluateTargetModeSelection)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d218d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {"EvaluateTargetModeSelection", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCameraModeComparator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCameraModeComparator::*)()>(&::Liv::Lck::GorillaTag::GtCameraModeComparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d21938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>& Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_get__gtSelectorsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtSelectorsGroup;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> const& Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_get__gtSelectorsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtSelectorsGroup;
}
constexpr void Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_set__gtSelectorsGroup(::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gtSelectorsGroup = value;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode& Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_get__targetMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMode;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode const& Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_get__targetMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetMode;
}
constexpr void Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_set__targetMode(::Liv::Lck::GorillaTag::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetMode = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_get_onTargetModeSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTargetModeSelected;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_get_onTargetModeSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTargetModeSelected;
}
constexpr void Liv::Lck::GorillaTag::GtCameraModeComparator::__cordl_internal_set_onTargetModeSelected(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTargetModeSelected = value;
}
inline void Liv::Lck::GorillaTag::GtCameraModeComparator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCameraModeComparator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCameraModeComparator::EvaluateTargetModeSelection(::Liv::Lck::GorillaTag::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {"EvaluateTargetModeSelection", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::GorillaTag::GtCameraModeComparator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCameraModeComparator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtCameraModeComparator* Liv::Lck::GorillaTag::GtCameraModeComparator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtCameraModeComparator*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtCameraModeComparator::GtCameraModeComparator()   {
}
