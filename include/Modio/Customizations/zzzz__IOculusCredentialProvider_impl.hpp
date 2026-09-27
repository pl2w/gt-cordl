#pragma once
// IWYU pragma private; include "Modio/Customizations/IOculusCredentialProvider.hpp"
#include "Modio/Customizations/zzzz__IOculusCredentialProvider_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::IOculusCredentialProvider.GetOculusUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* (::Modio::Customizations::IOculusCredentialProvider::*)()>(&::Modio::Customizations::IOculusCredentialProvider::GetOculusUserId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(),
                    {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::IOculusCredentialProvider.GetOculusAccessToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Customizations::IOculusCredentialProvider::*)()>(&::Modio::Customizations::IOculusCredentialProvider::GetOculusAccessToken)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(),
                    {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::IOculusCredentialProvider.GetOculusUserProof
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Modio::Customizations::IOculusCredentialProvider::*)()>(&::Modio::Customizations::IOculusCredentialProvider::GetOculusUserProof)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(),
                    {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::IOculusCredentialProvider.GetOculusDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Customizations::IOculusCredentialProvider::*)()>(&::Modio::Customizations::IOculusCredentialProvider::GetOculusDevice)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(),
                    {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>* Modio::Customizations::IOculusCredentialProvider::GetOculusUserId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Customizations::IOculusCredentialProvider::GetOculusAccessToken()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Modio::Customizations::IOculusCredentialProvider::GetOculusUserProof()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::StringW Modio::Customizations::IOculusCredentialProvider::GetOculusDevice()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::IOculusCredentialProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
