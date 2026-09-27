#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEvent.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_RotationType_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_TranslationType_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_RotationType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_TranslationType_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::LocomotionEvent::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEvent::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::LocomotionEvent::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEvent::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4c643c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent.get_Translation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocomotionEvent_TranslationType (::Oculus::Interaction::Locomotion::LocomotionEvent::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEvent::get_Translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Translation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocomotionEvent_RotationType (::Oculus::Interaction::Locomotion::LocomotionEvent::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEvent::get_Rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent.get_EventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Interaction::Locomotion::LocomotionEvent::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEvent::get_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_EventId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEvent::*)(int32_t, ::UnityEngine::Pose, ::GlobalNamespace::LocomotionEvent_TranslationType, ::GlobalNamespace::LocomotionEvent_RotationType)>(&::Oculus::Interaction::Locomotion::LocomotionEvent::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4c5aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_TranslationType>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_RotationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEvent::*)(int32_t, ::UnityEngine::Vector3, ::GlobalNamespace::LocomotionEvent_TranslationType)>(&::Oculus::Interaction::Locomotion::LocomotionEvent::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4c6468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_TranslationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEvent::*)(int32_t, ::UnityEngine::Quaternion, ::GlobalNamespace::LocomotionEvent_RotationType)>(&::Oculus::Interaction::Locomotion::LocomotionEvent::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa4c6578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_RotationType>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionEvent::setStaticF__nextEventId(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "_nextEventId", ::Oculus::Interaction::Locomotion::LocomotionEvent>(std::forward<uint64_t>(value));
}
inline uint64_t Oculus::Interaction::Locomotion::LocomotionEvent::getStaticF__nextEventId()  {
return ::cordl_internals::getStaticField<uint64_t, "_nextEventId", ::Oculus::Interaction::Locomotion::LocomotionEvent>();
}
inline int32_t Oculus::Interaction::Locomotion::LocomotionEvent::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::LocomotionEvent::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
}
inline ::GlobalNamespace::LocomotionEvent_TranslationType Oculus::Interaction::Locomotion::LocomotionEvent::get_Translation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Translation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocomotionEvent_TranslationType>(*this, ___internal_method);
}
inline ::GlobalNamespace::LocomotionEvent_RotationType Oculus::Interaction::Locomotion::LocomotionEvent::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocomotionEvent_RotationType>(*this, ___internal_method);
}
inline uint64_t Oculus::Interaction::Locomotion::LocomotionEvent::get_EventId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {"get_EventId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEvent::_ctor(int32_t  identifier, ::UnityEngine::Pose  pose, ::GlobalNamespace::LocomotionEvent_TranslationType  translationType, ::GlobalNamespace::LocomotionEvent_RotationType  rotationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_TranslationType>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_RotationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, identifier, pose, translationType, rotationType);
}
inline void Oculus::Interaction::Locomotion::LocomotionEvent::_ctor(int32_t  identifier, ::UnityEngine::Vector3  position, ::GlobalNamespace::LocomotionEvent_TranslationType  translationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_TranslationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, identifier, position, translationType);
}
inline void Oculus::Interaction::Locomotion::LocomotionEvent::_ctor(int32_t  identifier, ::UnityEngine::Quaternion  rotation, ::GlobalNamespace::LocomotionEvent_RotationType  rotationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::LocomotionEvent_RotationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, identifier, rotation, rotationType);
}
// Ctor Parameters [CppParam { name: "_Identifier_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Pose_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Translation_k__BackingField", ty: "::GlobalNamespace::LocomotionEvent_TranslationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Rotation_k__BackingField", ty: "::GlobalNamespace::LocomotionEvent_RotationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Locomotion::LocomotionEvent::LocomotionEvent(int32_t  _Identifier_k__BackingField, ::UnityEngine::Pose  _Pose_k__BackingField, ::GlobalNamespace::LocomotionEvent_TranslationType  _Translation_k__BackingField, ::GlobalNamespace::LocomotionEvent_RotationType  _Rotation_k__BackingField, uint64_t  _EventId_k__BackingField) noexcept  {
this->_Identifier_k__BackingField = _Identifier_k__BackingField;
this->_Pose_k__BackingField = _Pose_k__BackingField;
this->_Translation_k__BackingField = _Translation_k__BackingField;
this->_Rotation_k__BackingField = _Rotation_k__BackingField;
this->_EventId_k__BackingField = _EventId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionEvent::LocomotionEvent()   {
}
