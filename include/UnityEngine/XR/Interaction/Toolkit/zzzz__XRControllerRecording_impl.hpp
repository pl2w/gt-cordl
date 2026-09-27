#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRControllerRecording.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerRecording_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRControllerState_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.get_frames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::get_frames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb402e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"get_frames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.get_duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::get_duration)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb401f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"get_duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb402e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb402eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.SetFrameDependentData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::SetFrameDependentData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb402ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"SetFrameDependentData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.AddRecordingFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::AddRecordingFrame)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb40307c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"AddRecordingFrame", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.AddRecordingFrameNonAlloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::AddRecordingFrameNonAlloc)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb402720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"AddRecordingFrameNonAlloc", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.InitRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::InitRecording)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb401a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"InitRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.SaveRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::SaveRecording)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb401ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"SaveRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording.AddRecordingFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)(double_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::AddRecordingFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb40315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"AddRecordingFrame", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb403160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_SelectActivatedInFirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActivatedInFirstFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_SelectActivatedInFirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActivatedInFirstFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_set_m_SelectActivatedInFirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectActivatedInFirstFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_ActivateActivatedInFirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateActivatedInFirstFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_ActivateActivatedInFirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateActivatedInFirstFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_set_m_ActivateActivatedInFirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateActivatedInFirstFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_FirstUIPressActivatedInFirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstUIPressActivatedInFirstFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_FirstUIPressActivatedInFirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstUIPressActivatedInFirstFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_set_m_FirstUIPressActivatedInFirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstUIPressActivatedInFirstFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>*& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_Frames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Frames;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* const& UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_get_m_Frames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Frames;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::__cordl_internal_set_m_Frames(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Frames = value;
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::get_frames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"get_frames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>*>(this, ___internal_method);
}
inline double_t UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::get_duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"get_duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::SetFrameDependentData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"SetFrameDependentData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::AddRecordingFrame(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"AddRecordingFrame", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::AddRecordingFrameNonAlloc(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"AddRecordingFrameNonAlloc", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::InitRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"InitRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::SaveRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"SaveRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::AddRecordingFrame(double_t  time, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  selectActive, bool  activateActive, bool  pressActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {"AddRecordingFrame", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, position, rotation, selectActive, activateActive, pressActive);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording* UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording::XRControllerRecording()   {
}
