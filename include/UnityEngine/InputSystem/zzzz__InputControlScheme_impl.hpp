#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlScheme.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_DeviceRequirement_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_MatchResult_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_SchemeJson_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf4a9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_bindingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::get_bindingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf4a9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"get_bindingGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.set_bindingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW)>(&::UnityEngine::InputSystem::InputControlScheme::set_bindingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf4a9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"set_bindingGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.get_deviceRequirements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlScheme_DeviceRequirement> (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::get_deviceRequirements)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf4a9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"get_deviceRequirements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>*, ::StringW)>(&::UnityEngine::InputSystem::InputControlScheme::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaf4aa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.SetNameAndBindingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputControlScheme::*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputControlScheme::SetNameAndBindingGroup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xaf4ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"SetNameAndBindingGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.SupportsDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputControlScheme::SupportsDevice)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xaf4ac54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"SupportsDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputControlScheme::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xaf4ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputControlScheme::*)(::System::Object*)>(&::UnityEngine::InputSystem::InputControlScheme::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf4aeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf4af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::InputControlScheme::*)()>(&::UnityEngine::InputSystem::InputControlScheme::ToString)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xaf4affc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputControlScheme::op_Equality)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaf4b180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlScheme.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputControlScheme, ::UnityEngine::InputSystem::InputControlScheme)>(&::UnityEngine::InputSystem::InputControlScheme::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaf4b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::InputControlScheme::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControlScheme::get_bindingGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"get_bindingGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlScheme::set_bindingGroup(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"set_bindingGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlScheme_DeviceRequirement> UnityEngine::InputSystem::InputControlScheme::get_deviceRequirements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"get_deviceRequirements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputControlScheme::_ctor(::StringW  name, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>*  devices, ::StringW  bindingGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::InputControlScheme_DeviceRequirement>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, devices, bindingGroup);
}
inline void UnityEngine::InputSystem::InputControlScheme::SetNameAndBindingGroup(::StringW  name, ::StringW  bindingGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"SetNameAndBindingGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, bindingGroup);
}
template<typename TDevices,typename TSchemes>
requires(::cordl_internals::type_constraint<TDevices, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputDevice*>*>)
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevices(TDevices  devices, TSchemes  schemes, ::UnityEngine::InputSystem::InputDevice*  mustIncludeDevice, bool  allowUnsuccesfulMatch)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {"FindControlSchemeForDevices", {::i2c::class_of<TDevices>(), ::i2c::class_of<TSchemes>()}, {::i2c::type_of<TDevices>(), ::i2c::type_of<TSchemes>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TDevices>(), ::i2c::class_of<TSchemes>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>>(nullptr, ___internal_method, devices, schemes, mustIncludeDevice, allowUnsuccesfulMatch);
}
template<typename TDevices,typename TSchemes>
requires(::cordl_internals::type_constraint<TDevices, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputDevice*>*>)
inline bool UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevices(TDevices  devices, TSchemes  schemes, ::by_ref<::UnityEngine::InputSystem::InputControlScheme>  controlScheme, ::by_ref<::GlobalNamespace::InputControlScheme_MatchResult>  matchResult, ::UnityEngine::InputSystem::InputDevice*  mustIncludeDevice, bool  allowUnsuccessfulMatch)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {"FindControlSchemeForDevices", {::i2c::class_of<TDevices>(), ::i2c::class_of<TSchemes>()}, {::i2c::type_of<TDevices>(), ::i2c::type_of<TSchemes>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlScheme>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::InputControlScheme_MatchResult>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TDevices>(), ::i2c::class_of<TSchemes>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, devices, schemes, controlScheme, matchResult, mustIncludeDevice, allowUnsuccessfulMatch);
}
template<typename TSchemes>
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputControlScheme::FindControlSchemeForDevice(::UnityEngine::InputSystem::InputDevice*  device, TSchemes  schemes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {"FindControlSchemeForDevice", {::i2c::class_of<TSchemes>()}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<TSchemes>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSchemes>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>>(nullptr, ___internal_method, device, schemes);
}
inline bool UnityEngine::InputSystem::InputControlScheme::SupportsDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"SupportsDevice", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, device);
}
template<typename TDevices>
requires(::cordl_internals::type_constraint<TDevices, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::InputDevice*>*>)
inline ::GlobalNamespace::InputControlScheme_MatchResult UnityEngine::InputSystem::InputControlScheme::PickDevicesFrom(TDevices  devices, ::UnityEngine::InputSystem::InputDevice*  favorDevice)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                    {"PickDevicesFrom", {::i2c::class_of<TDevices>()}, {::i2c::type_of<TDevices>(), ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TDevices>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputControlScheme_MatchResult>(*this, ___internal_method, devices, favorDevice);
}
inline bool UnityEngine::InputSystem::InputControlScheme::Equals(::UnityEngine::InputSystem::InputControlScheme  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::InputControlScheme::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::InputControlScheme::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputControlScheme::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputControlScheme::op_Equality(::UnityEngine::InputSystem::InputControlScheme  left, ::UnityEngine::InputSystem::InputControlScheme  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"op_Equality", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::InputControlScheme::op_Inequality(::UnityEngine::InputSystem::InputControlScheme  left, ::UnityEngine::InputSystem::InputControlScheme  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::InputControlScheme>(),
                        {"op_Inequality", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>(), ::i2c::type_of<::UnityEngine::InputSystem::InputControlScheme>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr  UnityEngine::InputSystem::InputControlScheme::operator ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>* UnityEngine::InputSystem::InputControlScheme::i___System__IEquatable_1___UnityEngine__InputSystem__InputControlScheme_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::InputControlScheme>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BindingGroup", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DeviceRequirements", ty: "::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::InputControlScheme::InputControlScheme(::StringW  m_Name, ::StringW  m_BindingGroup, ::ArrayW<::GlobalNamespace::InputControlScheme_DeviceRequirement>  m_DeviceRequirements) noexcept  {
this->m_Name = m_Name;
this->m_BindingGroup = m_BindingGroup;
this->m_DeviceRequirements = m_DeviceRequirements;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlScheme::InputControlScheme()   {
}
