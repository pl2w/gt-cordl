#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NestedBlendSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_impl.hpp"
#include "Unity/Cinemachine/zzzz__NestedBlendSource_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineBlend_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_ActivationEventParams_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NestedBlendSource::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::NestedBlendSource::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaeaabf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.get_Blend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineBlend* (::Unity::Cinemachine::NestedBlendSource::*)()>(&::Unity::Cinemachine::NestedBlendSource::get_Blend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeaf710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_Blend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.set_Blend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NestedBlendSource::*)(::Unity::Cinemachine::CinemachineBlend*)>(&::Unity::Cinemachine::NestedBlendSource::set_Blend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeaf718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"set_Blend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::NestedBlendSource::*)()>(&::Unity::Cinemachine::NestedBlendSource::get_Name)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaeaf720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Unity::Cinemachine::NestedBlendSource::*)()>(&::Unity::Cinemachine::NestedBlendSource::get_Description)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaeaf834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CameraState (::Unity::Cinemachine::NestedBlendSource::*)()>(&::Unity::Cinemachine::NestedBlendSource::get_State)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeaf88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.set_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NestedBlendSource::*)(::Unity::Cinemachine::CameraState)>(&::Unity::Cinemachine::NestedBlendSource::set_State)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaeaf89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"set_State", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::NestedBlendSource::*)()>(&::Unity::Cinemachine::NestedBlendSource::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaeaf8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.get_ParentCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ICinemachineMixer* (::Unity::Cinemachine::NestedBlendSource::*)()>(&::Unity::Cinemachine::NestedBlendSource::get_ParentCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeaf8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.UpdateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NestedBlendSource::*)(::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::NestedBlendSource::UpdateCameraState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeaf8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NestedBlendSource.OnCameraActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NestedBlendSource::*)(::GlobalNamespace::ICinemachineCamera_ActivationEventParams)>(&::Unity::Cinemachine::NestedBlendSource::OnCameraActivated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaeaf940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Cinemachine::NestedBlendSource::__cordl_internal_get_m_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr ::StringW const& Unity::Cinemachine::NestedBlendSource::__cordl_internal_get_m_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Name;
}
constexpr void Unity::Cinemachine::NestedBlendSource::__cordl_internal_set_m_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Name = value;
}
constexpr ::Unity::Cinemachine::CinemachineBlend*& Unity::Cinemachine::NestedBlendSource::__cordl_internal_get__Blend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blend_k__BackingField;
}
constexpr ::Unity::Cinemachine::CinemachineBlend* const& Unity::Cinemachine::NestedBlendSource::__cordl_internal_get__Blend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Blend_k__BackingField;
}
constexpr void Unity::Cinemachine::NestedBlendSource::__cordl_internal_set__Blend_k__BackingField(::Unity::Cinemachine::CinemachineBlend*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Blend_k__BackingField = value;
}
constexpr ::Unity::Cinemachine::CameraState& Unity::Cinemachine::NestedBlendSource::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Unity::Cinemachine::CameraState const& Unity::Cinemachine::NestedBlendSource::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Unity::Cinemachine::NestedBlendSource::__cordl_internal_set__State_k__BackingField(::Unity::Cinemachine::CameraState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
inline void Unity::Cinemachine::NestedBlendSource::_ctor(::Unity::Cinemachine::CinemachineBlend*  blend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blend);
}
inline ::Unity::Cinemachine::CinemachineBlend* Unity::Cinemachine::NestedBlendSource::get_Blend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_Blend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineBlend*>(this, ___internal_method);
}
inline void Unity::Cinemachine::NestedBlendSource::set_Blend(::Unity::Cinemachine::CinemachineBlend*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"set_Blend", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineBlend*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Unity::Cinemachine::NestedBlendSource::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Unity::Cinemachine::NestedBlendSource::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CameraState Unity::Cinemachine::NestedBlendSource::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CameraState>(this, ___internal_method);
}
inline void Unity::Cinemachine::NestedBlendSource::set_State(::Unity::Cinemachine::CameraState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"set_State", {}, {::i2c::type_of<::Unity::Cinemachine::CameraState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::NestedBlendSource::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Cinemachine::ICinemachineMixer* Unity::Cinemachine::NestedBlendSource::get_ParentCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"get_ParentCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ICinemachineMixer*>(this, ___internal_method);
}
inline void Unity::Cinemachine::NestedBlendSource::UpdateCameraState(::UnityEngine::Vector3  worldUp, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"UpdateCameraState", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldUp, deltaTime);
}
inline void Unity::Cinemachine::NestedBlendSource::OnCameraActivated(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NestedBlendSource*>(),
                        {"OnCameraActivated", {}, {::i2c::type_of<::GlobalNamespace::ICinemachineCamera_ActivationEventParams>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::Unity::Cinemachine::NestedBlendSource* Unity::Cinemachine::NestedBlendSource::New_ctor(::Unity::Cinemachine::CinemachineBlend*  blend)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::NestedBlendSource*>(blend));
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::NestedBlendSource::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::NestedBlendSource::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::NestedBlendSource::NestedBlendSource()   {
}
