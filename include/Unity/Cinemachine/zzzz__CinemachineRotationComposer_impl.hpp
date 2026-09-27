#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineRotationComposer.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotationComposer_FovCache_impl.hpp"
#include "Unity/Cinemachine/zzzz__LookaheadSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_impl.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotationComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineFreeLookModifier_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotationComposer_FovCache_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::Reset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaea4940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::OnValidate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaea49d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaea49f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea4a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.get_CameraLooksAtTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::get_CameraLooksAtTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaea4a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.get_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::get_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea4a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.set_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineRotationComposer::set_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaea4aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.get_GetEffectiveComposition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::get_GetEffectiveComposition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaea4aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"get_GetEffectiveComposition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.GetLookAtPointAndSetTrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineRotationComposer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineRotationComposer::GetLookAtPointAndSetTrackedPoint)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xaea4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"GetLookAtPointAndSetTrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineRotationComposer::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaea4c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineRotationComposer::ForceCameraPosition)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xaea4d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaea4e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.PrePipelineMutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineRotationComposer::PrePipelineMutateCameraState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xaea4e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineRotationComposer::MutateCameraState)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0xaea4efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.RotateToScreenBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Quaternion>, ::UnityEngine::Vector2, float_t)>(&::Unity::Cinemachine::CinemachineRotationComposer::RotateToScreenBounds)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xaea5b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"RotateToScreenBounds", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.ClampVerticalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rect>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineRotationComposer::ClampVerticalBounds)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xaea5d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"ClampVerticalBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaea5e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.get_Composition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer.Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)(::Unity::Cinemachine::ScreenComposerSettings)>(&::Unity::Cinemachine::CinemachineRotationComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaea5e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineRotationComposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineRotationComposer::*)()>(&::Unity::Cinemachine::CinemachineRotationComposer::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xaea5e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::ScreenComposerSettings& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_Composition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Composition;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_Composition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Composition;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Composition = value;
}
constexpr bool& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_CenterOnActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOnActivate;
}
constexpr bool const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_CenterOnActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOnActivate;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_CenterOnActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterOnActivate = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_TargetOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_TargetOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TargetOffset;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_TargetOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TargetOffset = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_Damping(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::Unity::Cinemachine::LookaheadSettings& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_Lookahead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lookahead;
}
constexpr ::Unity::Cinemachine::LookaheadSettings const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_Lookahead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lookahead;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_Lookahead(::Unity::Cinemachine::LookaheadSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lookahead = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get__TrackedPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get__TrackedPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackedPoint_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_CameraPosPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraPosPrevFrame;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_CameraPosPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraPosPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_CameraPosPrevFrame(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraPosPrevFrame = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_LookAtPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAtPrevFrame;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_LookAtPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAtPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_LookAtPrevFrame(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookAtPrevFrame = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_ScreenOffsetPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenOffsetPrevFrame;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_ScreenOffsetPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenOffsetPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_ScreenOffsetPrevFrame(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenOffsetPrevFrame = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_CameraOrientationPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraOrientationPrevFrame;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_CameraOrientationPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraOrientationPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_CameraOrientationPrevFrame(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraOrientationPrevFrame = value;
}
constexpr ::Unity::Cinemachine::PositionPredictor& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_Predictor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr ::Unity::Cinemachine::PositionPredictor const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_Predictor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Predictor = value;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_CompositionLastFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompositionLastFrame;
}
constexpr ::Unity::Cinemachine::ScreenComposerSettings const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_CompositionLastFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompositionLastFrame;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_CompositionLastFrame(::Unity::Cinemachine::ScreenComposerSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CompositionLastFrame = value;
}
constexpr ::GlobalNamespace::CinemachineRotationComposer_FovCache& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_Cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr ::GlobalNamespace::CinemachineRotationComposer_FovCache const& Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_get_m_Cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Cache;
}
constexpr void Unity::Cinemachine::CinemachineRotationComposer::__cordl_internal_set_m_Cache(::GlobalNamespace::CinemachineRotationComposer_FovCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Cache = value;
}
inline void Unity::Cinemachine::CinemachineRotationComposer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineRotationComposer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineRotationComposer::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineRotationComposer::get_CameraLooksAtTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineRotationComposer::get_TrackedPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::set_TrackedPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::CinemachineRotationComposer::get_GetEffectiveComposition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"get_GetEffectiveComposition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineRotationComposer::GetLookAtPointAndSetTrackedPoint(::UnityEngine::Vector3  lookAt, ::UnityEngine::Vector3  up, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"GetLookAtPointAndSetTrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, lookAt, up, deltaTime);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineRotationComposer::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::RotateToScreenBounds(::by_ref<::Unity::Cinemachine::CameraState>  state, ::UnityEngine::Rect  screenRect, ::UnityEngine::Vector3  trackedPoint, ::by_ref<::UnityEngine::Quaternion>  rigOrientation, ::UnityEngine::Vector2  fov, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"RotateToScreenBounds", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, screenRect, trackedPoint, rigOrientation, fov, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineRotationComposer::ClampVerticalBounds(::by_ref<::UnityEngine::Rect>  r, ::UnityEngine::Vector3  dir, ::UnityEngine::Vector3  up, float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"ClampVerticalBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, r, dir, up, fov);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::CinemachineRotationComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_get_Composition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.get_Composition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::Unity_Cinemachine_CinemachineFreeLookModifier_IModifiableComposition_set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {"Unity.Cinemachine.CinemachineFreeLookModifier.IModifiableComposition.set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineRotationComposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineRotationComposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineRotationComposer* Unity::Cinemachine::CinemachineRotationComposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineRotationComposer*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr  Unity::Cinemachine::CinemachineRotationComposer::operator ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition* Unity::Cinemachine::CinemachineRotationComposer::i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifiableComposition() noexcept {
return static_cast<::Unity::Cinemachine::CinemachineFreeLookModifier_IModifiableComposition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineRotationComposer::CinemachineRotationComposer()   {
}
