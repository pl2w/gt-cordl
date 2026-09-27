#pragma once
// IWYU pragma private; include "Liv/Lck/LckMediator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckMediator_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckMediator.add_CameraRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckMediator::add_CameraRegistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce32e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_CameraRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.remove_CameraRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckMediator::remove_CameraRegistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce33dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_CameraRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.add_CameraUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckMediator::add_CameraUnregistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_CameraUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.remove_CameraUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckMediator::remove_CameraUnregistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce35c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_CameraUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.add_MonitorRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckMonitor*>*)>(&::Liv::Lck::LckMediator::add_MonitorRegistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce36b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_MonitorRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.remove_MonitorRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckMonitor*>*)>(&::Liv::Lck::LckMediator::remove_MonitorRegistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce37ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_MonitorRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.add_MonitorUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckMonitor*>*)>(&::Liv::Lck::LckMediator::add_MonitorUnregistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce38a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_MonitorUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.remove_MonitorUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Liv::Lck::ILckMonitor*>*)>(&::Liv::Lck::LckMediator::remove_MonitorUnregistered)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce3994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_MonitorUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.add_MonitorToCameraAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::StringW,::StringW>*)>(&::Liv::Lck::LckMediator::add_MonitorToCameraAssignment)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce3a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_MonitorToCameraAssignment", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.remove_MonitorToCameraAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::StringW,::StringW>*)>(&::Liv::Lck::LckMediator::remove_MonitorToCameraAssignment)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9ce3b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_MonitorToCameraAssignment", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.RegisterCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckCamera*)>(&::Liv::Lck::LckMediator::RegisterCamera)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x9ce0478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"RegisterCamera", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.UnregisterCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckCamera*)>(&::Liv::Lck::LckMediator::UnregisterCamera)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9ce0878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"UnregisterCamera", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.RegisterMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckMonitor*)>(&::Liv::Lck::LckMediator::RegisterMonitor)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x9ce3c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"RegisterMonitor", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.UnregisterMonitor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ILckMonitor*)>(&::Liv::Lck::LckMediator::UnregisterMonitor)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x9ce401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"UnregisterMonitor", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.GetCameraById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ILckCamera* (*)(::StringW)>(&::Liv::Lck::LckMediator::GetCameraById)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ce43c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetCameraById", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.GetMonitorById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ILckMonitor* (*)(::StringW)>(&::Liv::Lck::LckMediator::GetMonitorById)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9ce445c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetMonitorById", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.GetCameras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckCamera*>* (*)()>(&::Liv::Lck::LckMediator::GetCameras)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ce44f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetCameras", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.GetMonitors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckMonitor*>* (*)()>(&::Liv::Lck::LckMediator::GetMonitors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ce456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetMonitors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMediator.NotifyMixerAboutMonitorForCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::Liv::Lck::LckMediator::NotifyMixerAboutMonitorForCamera)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ce45e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"NotifyMixerAboutMonitorForCamera", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckMediator::setStaticF__cameras(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>*, "_cameras", ::Liv::Lck::LckMediator*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>* Liv::Lck::LckMediator::getStaticF__cameras()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckCamera*>*, "_cameras", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::setStaticF__monitors(::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>*, "_monitors", ::Liv::Lck::LckMediator*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>* Liv::Lck::LckMediator::getStaticF__monitors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Liv::Lck::ILckMonitor*>*, "_monitors", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::setStaticF_CameraRegistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Liv::Lck::ILckCamera*>*, "CameraRegistered", ::Liv::Lck::LckMediator*>(std::forward<::System::Action_1<::Liv::Lck::ILckCamera*>*>(value));
}
inline ::System::Action_1<::Liv::Lck::ILckCamera*>* Liv::Lck::LckMediator::getStaticF_CameraRegistered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Liv::Lck::ILckCamera*>*, "CameraRegistered", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::setStaticF_CameraUnregistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Liv::Lck::ILckCamera*>*, "CameraUnregistered", ::Liv::Lck::LckMediator*>(std::forward<::System::Action_1<::Liv::Lck::ILckCamera*>*>(value));
}
inline ::System::Action_1<::Liv::Lck::ILckCamera*>* Liv::Lck::LckMediator::getStaticF_CameraUnregistered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Liv::Lck::ILckCamera*>*, "CameraUnregistered", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::setStaticF_MonitorRegistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Liv::Lck::ILckMonitor*>*, "MonitorRegistered", ::Liv::Lck::LckMediator*>(std::forward<::System::Action_1<::Liv::Lck::ILckMonitor*>*>(value));
}
inline ::System::Action_1<::Liv::Lck::ILckMonitor*>* Liv::Lck::LckMediator::getStaticF_MonitorRegistered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Liv::Lck::ILckMonitor*>*, "MonitorRegistered", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::setStaticF_MonitorUnregistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Liv::Lck::ILckMonitor*>*, "MonitorUnregistered", ::Liv::Lck::LckMediator*>(std::forward<::System::Action_1<::Liv::Lck::ILckMonitor*>*>(value));
}
inline ::System::Action_1<::Liv::Lck::ILckMonitor*>* Liv::Lck::LckMediator::getStaticF_MonitorUnregistered()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Liv::Lck::ILckMonitor*>*, "MonitorUnregistered", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::setStaticF_MonitorToCameraAssignment(::System::Action_2<::StringW,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::StringW,::StringW>*, "MonitorToCameraAssignment", ::Liv::Lck::LckMediator*>(std::forward<::System::Action_2<::StringW,::StringW>*>(value));
}
inline ::System::Action_2<::StringW,::StringW>* Liv::Lck::LckMediator::getStaticF_MonitorToCameraAssignment()  {
return ::cordl_internals::getStaticField<::System::Action_2<::StringW,::StringW>*, "MonitorToCameraAssignment", ::Liv::Lck::LckMediator*>();
}
inline void Liv::Lck::LckMediator::add_CameraRegistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_CameraRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::remove_CameraRegistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_CameraRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::add_CameraUnregistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_CameraUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::remove_CameraUnregistered(::System::Action_1<::Liv::Lck::ILckCamera*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_CameraUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::add_MonitorRegistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_MonitorRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::remove_MonitorRegistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_MonitorRegistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::add_MonitorUnregistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_MonitorUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::remove_MonitorUnregistered(::System::Action_1<::Liv::Lck::ILckMonitor*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_MonitorUnregistered", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::ILckMonitor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::add_MonitorToCameraAssignment(::System::Action_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"add_MonitorToCameraAssignment", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::remove_MonitorToCameraAssignment(::System::Action_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"remove_MonitorToCameraAssignment", {}, {::i2c::type_of<::System::Action_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::LckMediator::RegisterCamera(::Liv::Lck::ILckCamera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"RegisterCamera", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void Liv::Lck::LckMediator::UnregisterCamera(::Liv::Lck::ILckCamera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"UnregisterCamera", {}, {::i2c::type_of<::Liv::Lck::ILckCamera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera);
}
inline void Liv::Lck::LckMediator::RegisterMonitor(::Liv::Lck::ILckMonitor*  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"RegisterMonitor", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monitor);
}
inline void Liv::Lck::LckMediator::UnregisterMonitor(::Liv::Lck::ILckMonitor*  monitor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"UnregisterMonitor", {}, {::i2c::type_of<::Liv::Lck::ILckMonitor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monitor);
}
inline ::Liv::Lck::ILckCamera* Liv::Lck::LckMediator::GetCameraById(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetCameraById", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ILckCamera*>(nullptr, ___internal_method, id);
}
inline ::Liv::Lck::ILckMonitor* Liv::Lck::LckMediator::GetMonitorById(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetMonitorById", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ILckMonitor*>(nullptr, ___internal_method, id);
}
inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckCamera*>* Liv::Lck::LckMediator::GetCameras()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetCameras", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckCamera*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckMonitor*>* Liv::Lck::LckMediator::GetMonitors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"GetMonitors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::ILckMonitor*>*>(nullptr, ___internal_method);
}
inline void Liv::Lck::LckMediator::NotifyMixerAboutMonitorForCamera(::StringW  monitorId, ::StringW  cameraId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMediator*>(),
                        {"NotifyMixerAboutMonitorForCamera", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, monitorId, cameraId);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckMediator::LckMediator()   {
}
