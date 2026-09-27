#pragma once
// IWYU pragma private; include "Unity/Cinemachine/VirtualCameraRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__VirtualCameraRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__VirtualCameraRegistry_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.get_AllCamerasSortedByNestingLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>* (::Unity::Cinemachine::VirtualCameraRegistry::*)()>(&::Unity::Cinemachine::VirtualCameraRegistry::get_AllCamerasSortedByNestingLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec2440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"get_AllCamerasSortedByNestingLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.get_ActiveCameraCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::VirtualCameraRegistry::*)()>(&::Unity::Cinemachine::VirtualCameraRegistry::get_ActiveCameraCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xaec2448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"get_ActiveCameraCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.GetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> (::Unity::Cinemachine::VirtualCameraRegistry::*)(int32_t)>(&::Unity::Cinemachine::VirtualCameraRegistry::GetActiveCamera)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xaec2490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"GetActiveCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.AddActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::VirtualCameraRegistry::AddActiveCamera)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xaec25f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"AddActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.RemoveActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::VirtualCameraRegistry::RemoveActiveCamera)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec26b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"RemoveActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.CameraDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::VirtualCameraRegistry::CameraDestroyed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec2744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"CameraDestroyed", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.CameraEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::VirtualCameraRegistry::CameraEnabled)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xaec27d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"CameraEnabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry.CameraDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::VirtualCameraRegistry::CameraDisabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaec2a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"CameraDisabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry::*)()>(&::Unity::Cinemachine::VirtualCameraRegistry::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaec2af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_ActiveCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveCameras;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* const& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_ActiveCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveCameras;
}
constexpr void Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_set_m_ActiveCameras(::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveCameras = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_AllCameras()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllCameras;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>* const& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_AllCameras() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllCameras;
}
constexpr void Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_set_m_AllCameras(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllCameras = value;
}
constexpr bool& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_ActiveCamerasAreSorted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveCamerasAreSorted;
}
constexpr bool const& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_ActiveCamerasAreSorted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveCamerasAreSorted;
}
constexpr void Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_set_m_ActiveCamerasAreSorted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveCamerasAreSorted = value;
}
constexpr int32_t& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_ActivationSequence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationSequence;
}
constexpr int32_t const& Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_get_m_ActivationSequence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationSequence;
}
constexpr void Unity::Cinemachine::VirtualCameraRegistry::__cordl_internal_set_m_ActivationSequence(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivationSequence = value;
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>* Unity::Cinemachine::VirtualCameraRegistry::get_AllCamerasSortedByNestingLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"get_AllCamerasSortedByNestingLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>*>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::VirtualCameraRegistry::get_ActiveCameraCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"get_ActiveCameraCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase> Unity::Cinemachine::VirtualCameraRegistry::GetActiveCamera(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"GetActiveCamera", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>(this, ___internal_method, index);
}
inline void Unity::Cinemachine::VirtualCameraRegistry::AddActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"AddActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::VirtualCameraRegistry::RemoveActiveCamera(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"RemoveActiveCamera", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::VirtualCameraRegistry::CameraDestroyed(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"CameraDestroyed", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::VirtualCameraRegistry::CameraEnabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"CameraEnabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::VirtualCameraRegistry::CameraDisabled(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {"CameraDisabled", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::VirtualCameraRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::VirtualCameraRegistry* Unity::Cinemachine::VirtualCameraRegistry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::VirtualCameraRegistry*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::VirtualCameraRegistry::VirtualCameraRegistry()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::VirtualCameraRegistry___c::*)()>(&::Unity::Cinemachine::VirtualCameraRegistry___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec2c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::VirtualCameraRegistry___c._GetActiveCamera_b__8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::VirtualCameraRegistry___c::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::VirtualCameraRegistry___c::_GetActiveCamera_b__8_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xaec2c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry___c*>(),
                        {"<GetActiveCamera>b__8_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::VirtualCameraRegistry___c::setStaticF___9(::Unity::Cinemachine::VirtualCameraRegistry___c*  value)  {
::cordl_internals::setStaticField<::Unity::Cinemachine::VirtualCameraRegistry___c*, "<>9", ::Unity::Cinemachine::VirtualCameraRegistry___c*>(std::forward<::Unity::Cinemachine::VirtualCameraRegistry___c*>(value));
}
inline ::Unity::Cinemachine::VirtualCameraRegistry___c* Unity::Cinemachine::VirtualCameraRegistry___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Unity::Cinemachine::VirtualCameraRegistry___c*, "<>9", ::Unity::Cinemachine::VirtualCameraRegistry___c*>();
}
inline void Unity::Cinemachine::VirtualCameraRegistry___c::setStaticF___9__8_0(::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*, "<>9__8_0", ::Unity::Cinemachine::VirtualCameraRegistry___c*>(std::forward<::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>* Unity::Cinemachine::VirtualCameraRegistry___c::getStaticF___9__8_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>*, "<>9__8_0", ::Unity::Cinemachine::VirtualCameraRegistry___c*>();
}
inline void Unity::Cinemachine::VirtualCameraRegistry___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Unity::Cinemachine::VirtualCameraRegistry___c::_GetActiveCamera_b__8_0(::Unity::Cinemachine::CinemachineVirtualCameraBase*  x, ::Unity::Cinemachine::CinemachineVirtualCameraBase*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::VirtualCameraRegistry___c*>(),
                        {"<GetActiveCamera>b__8_0", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
inline ::Unity::Cinemachine::VirtualCameraRegistry___c* Unity::Cinemachine::VirtualCameraRegistry___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::VirtualCameraRegistry___c*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::VirtualCameraRegistry___c::VirtualCameraRegistry___c()   {
}
