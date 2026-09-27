#pragma once
// IWYU pragma private; include "Modio/ModioClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModioClient_def.hpp"
#include "Modio/API/Interfaces/zzzz__IModioAPIInterface_def.hpp"
#include "Modio/Authentication/zzzz__IModioAuthService_def.hpp"
#include "Modio/FileIO/zzzz__IModioDataStorage_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModioClient__Init_d__26_def.hpp"
#include "Modio/zzzz__ModioClient__Shutdown_d__27_def.hpp"
#include "Modio/zzzz__ModioSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Modio::ModioClient.get_DataStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::FileIO::IModioDataStorage* (*)()>(&::Modio::ModioClient::get_DataStorage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa006cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_DataStorage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.get_Api
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::Interfaces::IModioAPIInterface* (*)()>(&::Modio::ModioClient::get_Api)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa00d8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_Api", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.get_AuthService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Authentication::IModioAuthService* (*)()>(&::Modio::ModioClient::get_AuthService)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa018914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_AuthService", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioSettings* (*)()>(&::Modio::ModioClient::get_Settings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa012c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::ModioClient::get_IsInitialized)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa018978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.set_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::ModioClient::set_IsInitialized)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa0189c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.get_IsCurrentlyInitializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::ModioClient::get_IsCurrentlyInitializing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa015618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_IsCurrentlyInitializing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.add_InternalOnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::ModioClient::add_InternalOnInitialized)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa018a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"add_InternalOnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.remove_InternalOnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::ModioClient::remove_InternalOnInitialized)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa018acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"remove_InternalOnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.add_OnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::ModioClient::add_OnInitialized)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa018b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"add_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.remove_OnInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::ModioClient::remove_OnInitialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa018c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"remove_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.add_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::ModioClient::add_OnShutdown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa018c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"add_OnShutdown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.remove_OnShutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::ModioClient::remove_OnShutdown)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa018cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"remove_OnShutdown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::Modio::ModioSettings*)>(&::Modio::ModioClient::Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa018d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"Init", {}, {::i2c::type_of<::Modio::ModioSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::Modio::ModioClient::Init)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa018df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Modio::ModioClient::Shutdown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa018edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioClient.BindDefaultServices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::ModioClient::BindDefaultServices)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa018fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"BindDefaultServices", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::ModioClient::setStaticF__IsInitialized_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IsInitialized>k__BackingField", ::Modio::ModioClient*>(std::forward<bool>(value));
}
inline bool Modio::ModioClient::getStaticF__IsInitialized_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IsInitialized>k__BackingField", ::Modio::ModioClient*>();
}
inline void Modio::ModioClient::setStaticF__initializingTCS(::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*, "_initializingTCS", ::Modio::ModioClient*>(std::forward<::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*>(value));
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>* Modio::ModioClient::getStaticF__initializingTCS()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Error*>*, "_initializingTCS", ::Modio::ModioClient*>();
}
inline void Modio::ModioClient::setStaticF__hasBoundDefaultServices(bool  value)  {
::cordl_internals::setStaticField<bool, "_hasBoundDefaultServices", ::Modio::ModioClient*>(std::forward<bool>(value));
}
inline bool Modio::ModioClient::getStaticF__hasBoundDefaultServices()  {
return ::cordl_internals::getStaticField<bool, "_hasBoundDefaultServices", ::Modio::ModioClient*>();
}
inline void Modio::ModioClient::setStaticF_InternalOnInitialized(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "InternalOnInitialized", ::Modio::ModioClient*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Modio::ModioClient::getStaticF_InternalOnInitialized()  {
return ::cordl_internals::getStaticField<::System::Action*, "InternalOnInitialized", ::Modio::ModioClient*>();
}
inline void Modio::ModioClient::setStaticF_OnShutdown(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnShutdown", ::Modio::ModioClient*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Modio::ModioClient::getStaticF_OnShutdown()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnShutdown", ::Modio::ModioClient*>();
}
inline ::Modio::FileIO::IModioDataStorage* Modio::ModioClient::get_DataStorage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_DataStorage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::FileIO::IModioDataStorage*>(nullptr, ___internal_method);
}
inline ::Modio::API::Interfaces::IModioAPIInterface* Modio::ModioClient::get_Api()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_Api", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::Interfaces::IModioAPIInterface*>(nullptr, ___internal_method);
}
inline ::Modio::Authentication::IModioAuthService* Modio::ModioClient::get_AuthService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_AuthService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Authentication::IModioAuthService*>(nullptr, ___internal_method);
}
inline ::Modio::ModioSettings* Modio::ModioClient::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioSettings*>(nullptr, ___internal_method);
}
inline bool Modio::ModioClient::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::ModioClient::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool Modio::ModioClient::get_IsCurrentlyInitializing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"get_IsCurrentlyInitializing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::ModioClient::add_InternalOnInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"add_InternalOnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModioClient::remove_InternalOnInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"remove_InternalOnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModioClient::add_OnInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"add_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModioClient::remove_OnInitialized(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"remove_OnInitialized", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModioClient::add_OnShutdown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"add_OnShutdown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModioClient::remove_OnShutdown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"remove_OnShutdown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModioClient::Init(::Modio::ModioSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"Init", {}, {::i2c::type_of<::Modio::ModioSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, settings);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::ModioClient::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::ModioClient::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void Modio::ModioClient::BindDefaultServices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioClient*>(),
                        {"BindDefaultServices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::ModioClient::ModioClient()   {
}
