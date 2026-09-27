#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/CoconutCamera.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CoconutCamera_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__IGtCameraVisuals_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::CoconutCamera.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::CoconutCamera::*)()>(&::Liv::Lck::GorillaTag::CoconutCamera::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d15948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::CoconutCamera.SetVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::CoconutCamera::*)(bool)>(&::Liv::Lck::GorillaTag::CoconutCamera::SetVisualsActive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d159bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"SetVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::CoconutCamera.SetNetworkedVisualsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::CoconutCamera::*)(bool)>(&::Liv::Lck::GorillaTag::CoconutCamera::SetNetworkedVisualsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d15c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"SetNetworkedVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::CoconutCamera.SetRecordingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::CoconutCamera::*)(bool)>(&::Liv::Lck::GorillaTag::CoconutCamera::SetRecordingState)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9d159fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"SetRecordingState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::CoconutCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::CoconutCamera::*)()>(&::Liv::Lck::GorillaTag::CoconutCamera::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d15c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__visuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__visuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visuals;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set__visuals(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visuals = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__bodyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__bodyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyRenderer;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set__bodyRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyRenderer = value;
}
constexpr bool& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__isNetworkedVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNetworkedVersion;
}
constexpr bool const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__isNetworkedVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isNetworkedVersion;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set__isNetworkedVersion(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isNetworkedVersion = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__propertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__propertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertyBlock;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set__propertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertyBlock = value;
}
constexpr ::StringW& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get_IS_RECORDING()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IS_RECORDING;
}
constexpr ::StringW const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get_IS_RECORDING() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IS_RECORDING;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set_IS_RECORDING(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IS_RECORDING = value;
}
constexpr int32_t& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__isRecordingID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecordingID;
}
constexpr int32_t const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__isRecordingID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecordingID;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set__isRecordingID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecordingID = value;
}
constexpr bool& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__isRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr bool const& Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_get__isRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecording;
}
constexpr void Liv::Lck::GorillaTag::CoconutCamera::__cordl_internal_set__isRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecording = value;
}
inline void Liv::Lck::GorillaTag::CoconutCamera::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::CoconutCamera::SetVisualsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"SetVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::CoconutCamera::SetNetworkedVisualsActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"SetNetworkedVisualsActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void Liv::Lck::GorillaTag::CoconutCamera::SetRecordingState(bool  isRecording)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {"SetRecordingState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isRecording);
}
inline void Liv::Lck::GorillaTag::CoconutCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::CoconutCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::CoconutCamera* Liv::Lck::GorillaTag::CoconutCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::CoconutCamera*>());
}
/// @brief Convert operator to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr  Liv::Lck::GorillaTag::CoconutCamera::operator ::Liv::Lck::GorillaTag::IGtCameraVisuals*() noexcept {
return static_cast<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::GorillaTag::IGtCameraVisuals"
constexpr ::Liv::Lck::GorillaTag::IGtCameraVisuals* Liv::Lck::GorillaTag::CoconutCamera::i___Liv__Lck__GorillaTag__IGtCameraVisuals() noexcept {
return static_cast<::Liv::Lck::GorillaTag::IGtCameraVisuals*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::CoconutCamera::CoconutCamera()   {
}
