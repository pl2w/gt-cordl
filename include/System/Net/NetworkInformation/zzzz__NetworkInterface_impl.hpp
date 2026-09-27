#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/NetworkInterface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/Net/NetworkInformation/zzzz__OperationalStatus_def.hpp"
#include "System/Net/NetworkInformation/zzzz__PhysicalAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.GetAllNetworkInterfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> (*)()>(&::System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xacc7ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                        {"GetAllNetworkInterfaces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacc8138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.get_OperationalStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::OperationalStatus (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacc8170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface.GetPhysicalAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkInformation::PhysicalAddress* (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::GetPhysicalAddress)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacc81a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                    {::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkInformation::NetworkInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkInformation::NetworkInterface::*)()>(&::System::Net::NetworkInformation::NetworkInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacc81e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*> System::Net::NetworkInformation::NetworkInterface::GetAllNetworkInterfaces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                        {"GetAllNetworkInterfaces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::NetworkInformation::NetworkInterface*>>(nullptr, ___internal_method);
}
inline ::StringW System::Net::NetworkInformation::NetworkInterface::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::OperationalStatus System::Net::NetworkInformation::NetworkInterface::get_OperationalStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::OperationalStatus>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::PhysicalAddress* System::Net::NetworkInformation::NetworkInterface::GetPhysicalAddress()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkInformation::PhysicalAddress*>(this, ___internal_method);
}
inline void System::Net::NetworkInformation::NetworkInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::NetworkInformation::NetworkInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::NetworkInformation::NetworkInterface* System::Net::NetworkInformation::NetworkInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkInformation::NetworkInterface*>());
}
// Ctor Parameters []
constexpr ::System::Net::NetworkInformation::NetworkInterface::NetworkInterface()   {
}
