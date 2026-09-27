#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/MachineIdStorage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__MachineIdStorage_def.hpp"
#include "Backtrace/Unity/Model/zzzz__MachineIdStorage_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterface_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage.GenerateMachineId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::MachineIdStorage::*)()>(&::Backtrace::Unity::Model::MachineIdStorage::GenerateMachineId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f154cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {"GenerateMachineId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage.FetchMachineIdFromStorage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::MachineIdStorage::*)()>(&::Backtrace::Unity::Model::MachineIdStorage::FetchMachineIdFromStorage)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f1556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {"FetchMachineIdFromStorage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage.StoreMachineId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::MachineIdStorage::*)(::StringW)>(&::Backtrace::Unity::Model::MachineIdStorage::StoreMachineId)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f1561c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {"StoreMachineId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage.UseUnityIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::MachineIdStorage::*)()>(&::Backtrace::Unity::Model::MachineIdStorage::UseUnityIdentifier)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f15668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage.UseNetworkingIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::MachineIdStorage::*)()>(&::Backtrace::Unity::Model::MachineIdStorage::UseNetworkingIdentifier)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5f156d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::MachineIdStorage::*)()>(&::Backtrace::Unity::Model::MachineIdStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Model::MachineIdStorage::GenerateMachineId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {"GenerateMachineId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::MachineIdStorage::FetchMachineIdFromStorage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {"FetchMachineIdFromStorage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::MachineIdStorage::StoreMachineId(::StringW  machineId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {"StoreMachineId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, machineId);
}
inline ::StringW Backtrace::Unity::Model::MachineIdStorage::UseUnityIdentifier()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Backtrace::Unity::Model::MachineIdStorage::UseNetworkingIdentifier()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::MachineIdStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::MachineIdStorage* Backtrace::Unity::Model::MachineIdStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::MachineIdStorage*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::MachineIdStorage::MachineIdStorage()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::MachineIdStorage___c::*)()>(&::Backtrace::Unity::Model::MachineIdStorage___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f15c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::MachineIdStorage___c._UseNetworkingIdentifier_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::MachineIdStorage___c::*)(::System::Net::NetworkInformation::NetworkInterface*)>(&::Backtrace::Unity::Model::MachineIdStorage___c::_UseNetworkingIdentifier_b__5_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f15c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage___c*>(),
                        {"<UseNetworkingIdentifier>b__5_0", {}, {::i2c::type_of<::System::Net::NetworkInformation::NetworkInterface*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Backtrace::Unity::Model::MachineIdStorage___c::setStaticF___9(::Backtrace::Unity::Model::MachineIdStorage___c*  value)  {
::cordl_internals::setStaticField<::Backtrace::Unity::Model::MachineIdStorage___c*, "<>9", ::Backtrace::Unity::Model::MachineIdStorage___c*>(std::forward<::Backtrace::Unity::Model::MachineIdStorage___c*>(value));
}
inline ::Backtrace::Unity::Model::MachineIdStorage___c* Backtrace::Unity::Model::MachineIdStorage___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Backtrace::Unity::Model::MachineIdStorage___c*, "<>9", ::Backtrace::Unity::Model::MachineIdStorage___c*>();
}
inline void Backtrace::Unity::Model::MachineIdStorage___c::setStaticF___9__5_0(::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>*, "<>9__5_0", ::Backtrace::Unity::Model::MachineIdStorage___c*>(std::forward<::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>*>(value));
}
inline ::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>* Backtrace::Unity::Model::MachineIdStorage___c::getStaticF___9__5_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::NetworkInformation::NetworkInterface*,bool>*, "<>9__5_0", ::Backtrace::Unity::Model::MachineIdStorage___c*>();
}
inline void Backtrace::Unity::Model::MachineIdStorage___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::MachineIdStorage___c::_UseNetworkingIdentifier_b__5_0(::System::Net::NetworkInformation::NetworkInterface*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::MachineIdStorage___c*>(),
                        {"<UseNetworkingIdentifier>b__5_0", {}, {::i2c::type_of<::System::Net::NetworkInformation::NetworkInterface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, n);
}
inline ::Backtrace::Unity::Model::MachineIdStorage___c* Backtrace::Unity::Model::MachineIdStorage___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::MachineIdStorage___c*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::MachineIdStorage___c::MachineIdStorage___c()   {
}
