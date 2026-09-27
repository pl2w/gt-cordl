#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/TeleportationMonitor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.add_teleported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::add_teleported)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb427c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"add_teleported", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.remove_teleported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::remove_teleported)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb427d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"remove_teleported", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::Initialize)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xb427dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.AddInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::AddInteractor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb42814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"AddInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.RemoveInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::RemoveInteractor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4281d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"RemoveInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.OnTeleportedAlways
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnTeleportedAlways)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb428244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"OnTeleportedAlways", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.OnTeleportedTurnAround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnTeleportedTurnAround)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb428410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"OnTeleportedTurnAround", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb42853c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_teleported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleported;
}
constexpr ::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_teleported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleported;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_set_teleported(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleported = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_TeleportedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportedFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_TeleportedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportedFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_set_m_TeleportedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportedFrame = value;
}
constexpr ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_Monitors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Monitors;
}
constexpr ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*> const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_Monitors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Monitors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_set_m_Monitors(::ArrayW<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Monitors = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::add_teleported(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"add_teleported", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::remove_teleported(::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"remove_teleported", {}, {::i2c::type_of<::System::Action_3<::UnityEngine::Pose,::UnityEngine::Pose,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::AddInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"AddInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"RemoveInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnTeleportedAlways(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*  poseContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"OnTeleportedAlways", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseContainer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnTeleportedTurnAround(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*  poseContainer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {"OnTeleportedTurnAround", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseContainer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TeleportationMonitor()   {
}
template<typename T>
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::__cordl_internal_get_providerStepped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___providerStepped;
}
template<typename T>
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::__cordl_internal_get_providerStepped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___providerStepped;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::__cordl_internal_set_providerStepped(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___providerStepped = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::__cordl_internal_get_m_ProviderInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderInteractors;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::__cordl_internal_get_m_ProviderInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProviderInteractors;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::__cordl_internal_set_m_ProviderInteractors(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProviderInteractors = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::setStaticF_s_Providers(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<T>*, "s_Providers", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::getStaticF_s_Providers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<T>*, "s_Providers", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::setStaticF_s_ProviderInteractorsPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>*, "s_ProviderInteractorsPool", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>*>(value));
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::getStaticF_s_ProviderInteractorsPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>*, "s_ProviderInteractorsPool", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::add_providerStepped(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"add_providerStepped", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::remove_providerStepped(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"remove_providerStepped", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::InitializeProvidersList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"InitializeProvidersList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::AddInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::CaptureOriginPoseBefore(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"CaptureOriginPoseBefore", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bodyTransformer);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::CaptureOriginPoseAfter(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"CaptureOriginPoseAfter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(nullptr, ___internal_method, bodyTransformer);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::OnBeforeStepLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"OnBeforeStepLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::OnAfterStepLocomotion(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"OnAfterStepLocomotion", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::_InitializeProvidersList_g__OnLocomotionProvidersChanged_6_0(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>(),
                        {"<InitializeProvidersList>g__OnLocomotionProvidersChanged|6_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, provider);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor_1<T>::TeleportationMonitor_ProviderMonitor_1()   {
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>(value));
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::setStaticF___9__6_1(::System::Predicate_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<T>*, "<>9__6_1", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>(std::forward<::System::Predicate_1<T>*>(value));
}
template<typename T>
inline ::System::Predicate_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::getStaticF___9__6_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<T>*, "<>9__6_1", ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>();
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::_InitializeProvidersList_b__6_1(T  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>(),
                        {"<InitializeProvidersList>b__6_1", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>* UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::__cctor_b__14_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>(),
                        {"<.cctor>b__14_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>*>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ProviderMonitor_1_TeleportationMonitor___c<T>::ProviderMonitor_1_TeleportationMonitor___c()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor.AddInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::AddInteractor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor.RemoveInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::RemoveInteractor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb42864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::setStaticF_s_OriginPoses(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*, "s_OriginPoses", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::getStaticF_s_OriginPoses()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>,::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>*, "s_OriginPoses", ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::AddInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_ProviderMonitor::TeleportationMonitor_ProviderMonitor()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer.CaptureBeforePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::CaptureBeforePose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb42854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {"CaptureBeforePose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer.CaptureAfterPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::CaptureAfterPose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4285c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {"CaptureAfterPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer.CalculateDeltaPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::CalculateDeltaPose)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb4282e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {"CalculateDeltaPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb428634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_beforePose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforePose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_beforePose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforePose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_set_beforePose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beforePose = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_afterPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_afterPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_set_afterPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afterPose = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_deltaPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_deltaPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_set_deltaPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaPose = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_m_BeforeFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeforeFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_m_BeforeFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BeforeFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_set_m_BeforeFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BeforeFrame = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_m_AfterFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AfterFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_m_AfterFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AfterFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_set_m_AfterFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AfterFrame = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_m_DeltaFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeltaFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_get_m_DeltaFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeltaFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::__cordl_internal_set_m_DeltaFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeltaFrame = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::CaptureBeforePose(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {"CaptureBeforePose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyTransformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::CaptureAfterPose(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  bodyTransformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {"CaptureAfterPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyTransformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::CalculateDeltaPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {"CalculateDeltaPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor_PoseContainer::TeleportationMonitor_PoseContainer()   {
}
