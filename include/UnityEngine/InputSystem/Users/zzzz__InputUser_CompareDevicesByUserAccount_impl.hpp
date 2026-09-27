#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Users/InputUser_CompareDevicesByUserAccount.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_impl.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_CompareDevicesByUserAccount_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUserAccountHandle_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputUser_CompareDevicesByUserAccount.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputUser_CompareDevicesByUserAccount::*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*)>(&::GlobalNamespace::InputUser_CompareDevicesByUserAccount::Compare)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xafd112c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUser_CompareDevicesByUserAccount>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputUser_CompareDevicesByUserAccount.GetUserAccountHandleForDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> (*)(::UnityEngine::InputSystem::InputDevice*)>(&::GlobalNamespace::InputUser_CompareDevicesByUserAccount::GetUserAccountHandleForDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafd1168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUser_CompareDevicesByUserAccount>(),
                        {"GetUserAccountHandleForDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::InputUser_CompareDevicesByUserAccount::Compare(::UnityEngine::InputSystem::InputDevice*  x, ::UnityEngine::InputSystem::InputDevice*  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUser_CompareDevicesByUserAccount>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, x, y);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle> GlobalNamespace::InputUser_CompareDevicesByUserAccount::GetUserAccountHandleForDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputUser_CompareDevicesByUserAccount>(),
                        {"GetUserAccountHandleForDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Users::InputUserAccountHandle>>(nullptr, ___internal_method, device);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr  GlobalNamespace::InputUser_CompareDevicesByUserAccount::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>* GlobalNamespace::InputUser_CompareDevicesByUserAccount::i___System__Collections__Generic__IComparer_1___UnityEngine__InputSystem__InputDevice__()  {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::InputSystem::InputDevice*>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "platformUserAccountHandle", ty: "::UnityEngine::InputSystem::Users::InputUserAccountHandle", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputUser_CompareDevicesByUserAccount::InputUser_CompareDevicesByUserAccount(::UnityEngine::InputSystem::Users::InputUserAccountHandle  platformUserAccountHandle) noexcept  {
this->platformUserAccountHandle = platformUserAccountHandle;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputUser_CompareDevicesByUserAccount::InputUser_CompareDevicesByUserAccount()   {
}
