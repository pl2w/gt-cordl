#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventTrace_DeviceInfo.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventTrace_DeviceInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.get_deviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputEventTrace_DeviceInfo::*)()>(&::GlobalNamespace::InputEventTrace_DeviceInfo::get_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff573c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_deviceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.set_deviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventTrace_DeviceInfo::*)(int32_t)>(&::GlobalNamespace::InputEventTrace_DeviceInfo::set_deviceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff5744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_deviceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.get_layout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::InputEventTrace_DeviceInfo::*)()>(&::GlobalNamespace::InputEventTrace_DeviceInfo::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff574c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_layout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.set_layout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventTrace_DeviceInfo::*)(::StringW)>(&::GlobalNamespace::InputEventTrace_DeviceInfo::set_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff5754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_layout", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.get_stateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::GlobalNamespace::InputEventTrace_DeviceInfo::*)()>(&::GlobalNamespace::InputEventTrace_DeviceInfo::get_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_stateFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.set_stateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventTrace_DeviceInfo::*)(::UnityEngine::InputSystem::Utilities::FourCC)>(&::GlobalNamespace::InputEventTrace_DeviceInfo::set_stateFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff5764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_stateFormat", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.get_stateSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::InputEventTrace_DeviceInfo::*)()>(&::GlobalNamespace::InputEventTrace_DeviceInfo::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff576c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_stateSizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputEventTrace_DeviceInfo.set_stateSizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputEventTrace_DeviceInfo::*)(int32_t)>(&::GlobalNamespace::InputEventTrace_DeviceInfo::set_stateSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaff5774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_stateSizeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::InputEventTrace_DeviceInfo::get_deviceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_deviceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputEventTrace_DeviceInfo::set_deviceId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_deviceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::InputEventTrace_DeviceInfo::get_layout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_layout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::InputEventTrace_DeviceInfo::set_layout(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_layout", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC GlobalNamespace::InputEventTrace_DeviceInfo::get_stateFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_stateFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline void GlobalNamespace::InputEventTrace_DeviceInfo::set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_stateFormat", {}, {::i2c::type_of<::UnityEngine::InputSystem::Utilities::FourCC>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::InputEventTrace_DeviceInfo::get_stateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"get_stateSizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::InputEventTrace_DeviceInfo::set_stateSizeInBytes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputEventTrace_DeviceInfo>(),
                        {"set_stateSizeInBytes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Layout", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StateSizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_FullLayoutJson", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputEventTrace_DeviceInfo::InputEventTrace_DeviceInfo(int32_t  m_DeviceId, ::StringW  m_Layout, ::UnityEngine::InputSystem::Utilities::FourCC  m_StateFormat, int32_t  m_StateSizeInBytes, ::StringW  m_FullLayoutJson) noexcept  {
this->m_DeviceId = m_DeviceId;
this->m_Layout = m_Layout;
this->m_StateFormat = m_StateFormat;
this->m_StateSizeInBytes = m_StateSizeInBytes;
this->m_FullLayoutJson = m_FullLayoutJson;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputEventTrace_DeviceInfo::InputEventTrace_DeviceInfo()   {
}
