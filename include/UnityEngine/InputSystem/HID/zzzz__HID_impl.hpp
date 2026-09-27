#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_Button_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_GenericDesktop_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDCollectionType_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptorBuilder_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementDescriptor_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDElementFlags_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDReportType_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_Simulation_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_UsagePage_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.get_QueryHIDReportDescriptorDeviceCommandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::HID::HID::get_QueryHIDReportDescriptorDeviceCommandType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xafdeb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_QueryHIDReportDescriptorDeviceCommandType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.get_QueryHIDReportDescriptorSizeDeviceCommandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::HID::HID::get_QueryHIDReportDescriptorSizeDeviceCommandType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xafdebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_QueryHIDReportDescriptorSizeDeviceCommandType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.get_QueryHIDParsedReportDescriptorDeviceCommandType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::HID::HID::get_QueryHIDParsedReportDescriptorDeviceCommandType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xafdebec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_QueryHIDParsedReportDescriptorDeviceCommandType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.get_hidDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptor (::UnityEngine::InputSystem::HID::HID::*)()>(&::UnityEngine::InputSystem::HID::HID::get_hidDescriptor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xafdec1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_hidDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.OnFindLayoutForDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(&::UnityEngine::InputSystem::HID::HID::OnFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0xafdecc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"OnFindLayoutForDevice", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.ReadHIDDeviceDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HID_HIDDeviceDescriptor (*)(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(&::UnityEngine::InputSystem::HID::HID::ReadHIDDeviceDescriptor)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0xafdf5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"ReadHIDDeviceDescriptor", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.UsagePageToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::HID_UsagePage)>(&::UnityEngine::InputSystem::HID::HID::UsagePageToString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xafe0ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"UsagePageToString", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID.UsageToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::HID_UsagePage, int32_t)>(&::UnityEngine::InputSystem::HID::HID::UsageToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xafe0d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"UsageToString", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HID::HID::*)()>(&::UnityEngine::InputSystem::HID::HID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafe0dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::InputSystem::HID::HID::__cordl_internal_get_m_HaveParsedHIDDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HaveParsedHIDDescriptor;
}
constexpr bool const& UnityEngine::InputSystem::HID::HID::__cordl_internal_get_m_HaveParsedHIDDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HaveParsedHIDDescriptor;
}
constexpr void UnityEngine::InputSystem::HID::HID::__cordl_internal_set_m_HaveParsedHIDDescriptor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HaveParsedHIDDescriptor = value;
}
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor& UnityEngine::InputSystem::HID::HID::__cordl_internal_get_m_HIDDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HIDDescriptor;
}
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor const& UnityEngine::InputSystem::HID::HID::__cordl_internal_get_m_HIDDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HIDDescriptor;
}
constexpr void UnityEngine::InputSystem::HID::HID::__cordl_internal_set_m_HIDDescriptor(::GlobalNamespace::HID_HIDDeviceDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HIDDescriptor = value;
}
inline void UnityEngine::InputSystem::HID::HID::setStaticF_k_HIDParseDescriptorFallback(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_HIDParseDescriptorFallback", ::UnityEngine::InputSystem::HID::HID*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::HID::HID::getStaticF_k_HIDParseDescriptorFallback()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_HIDParseDescriptorFallback", ::UnityEngine::InputSystem::HID::HID*>();
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::HID::HID::get_QueryHIDReportDescriptorDeviceCommandType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_QueryHIDReportDescriptorDeviceCommandType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::HID::HID::get_QueryHIDReportDescriptorSizeDeviceCommandType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_QueryHIDReportDescriptorSizeDeviceCommandType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::HID::HID::get_QueryHIDParsedReportDescriptorDeviceCommandType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_QueryHIDParsedReportDescriptorDeviceCommandType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptor UnityEngine::InputSystem::HID::HID::get_hidDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"get_hidDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptor>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::HID::HID::OnFindLayoutForDevice(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  description, ::StringW  matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  executeDeviceCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"OnFindLayoutForDevice", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, description, matchedLayout, executeDeviceCommand);
}
inline ::GlobalNamespace::HID_HIDDeviceDescriptor UnityEngine::InputSystem::HID::HID::ReadHIDDeviceDescriptor(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  deviceDescription, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  executeCommandDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"ReadHIDDeviceDescriptor", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HID_HIDDeviceDescriptor>(nullptr, ___internal_method, deviceDescription, executeCommandDelegate);
}
inline ::StringW UnityEngine::InputSystem::HID::HID::UsagePageToString(::GlobalNamespace::HID_UsagePage  usagePage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"UsagePageToString", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, usagePage);
}
inline ::StringW UnityEngine::InputSystem::HID::HID::UsageToString(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {"UsageToString", {}, {::i2c::type_of<::GlobalNamespace::HID_UsagePage>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, usagePage, usage);
}
inline void UnityEngine::InputSystem::HID::HID::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::HID::HID* UnityEngine::InputSystem::HID::HID::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::HID::HID*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HID::HID()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::*)()>(&::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafe3748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0._OnFindLayoutForDevice_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::*)()>(&::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::_OnFindLayoutForDevice_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xafe3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*>(),
                        {"<OnFindLayoutForDevice>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*& UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::__cordl_internal_get_layout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layout;
}
constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* const& UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::__cordl_internal_get_layout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layout;
}
constexpr void UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::__cordl_internal_set_layout(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layout = value;
}
inline void UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::_OnFindLayoutForDevice_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*>(),
                        {"<OnFindLayoutForDevice>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0* UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0::HID___c__DisplayClass13_0()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::*)()>(&::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::Build)> {
  constexpr static std::size_t size = 0xc78;
  constexpr static std::size_t addrs = 0xafe0e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*>(),
                        {"Build", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::*)()>(&::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafdfdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_hidDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidDescriptor;
}
constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor const& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_hidDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hidDescriptor;
}
constexpr void UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_set_hidDescriptor(::GlobalNamespace::HID_HIDDeviceDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hidDescriptor = value;
}
constexpr ::StringW& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_parentLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_parentLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentLayout;
}
constexpr void UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_set_parentLayout(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentLayout = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_deviceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceType;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_get_deviceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deviceType;
}
constexpr void UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::__cordl_internal_set_deviceType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deviceType = value;
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*>(),
                        {"Build", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder::HID_HIDLayoutBuilder()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::*)()>(&::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafe2b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c._Build_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::*)(::GlobalNamespace::HID_HIDElementDescriptor)>(&::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_Build_b__4_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xafe2b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {"<Build>b__4_0", {}, {::i2c::type_of<::GlobalNamespace::HID_HIDElementDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c._Build_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::*)(::GlobalNamespace::HID_HIDElementDescriptor)>(&::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_Build_b__4_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xafe2bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {"<Build>b__4_1", {}, {::i2c::type_of<::GlobalNamespace::HID_HIDElementDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c._Build_b__4_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::*)(::GlobalNamespace::InputControlLayout_ControlItem)>(&::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_Build_b__4_2)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafe2be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {"<Build>b__4_2", {}, {::i2c::type_of<::GlobalNamespace::InputControlLayout_ControlItem>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::setStaticF___9(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*, "<>9", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(std::forward<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(value));
}
inline ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*, "<>9", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>();
}
inline void UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::setStaticF___9__4_0(::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*, "<>9__4_0", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>* UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*, "<>9__4_0", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>();
}
inline void UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::setStaticF___9__4_1(::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*, "<>9__4_1", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>* UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::getStaticF___9__4_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*, "<>9__4_1", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>();
}
inline void UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::setStaticF___9__4_2(::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>*, "<>9__4_2", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(std::forward<::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>* UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::getStaticF___9__4_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>*, "<>9__4_2", ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>();
}
inline void UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_Build_b__4_0(::GlobalNamespace::HID_HIDElementDescriptor  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {"<Build>b__4_0", {}, {::i2c::type_of<::GlobalNamespace::HID_HIDElementDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline bool UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_Build_b__4_1(::GlobalNamespace::HID_HIDElementDescriptor  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {"<Build>b__4_1", {}, {::i2c::type_of<::GlobalNamespace::HID_HIDElementDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, element);
}
inline ::StringW UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::_Build_b__4_2(::GlobalNamespace::InputControlLayout_ControlItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>(),
                        {"<Build>b__4_2", {}, {::i2c::type_of<::GlobalNamespace::InputControlLayout_ControlItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c::HIDLayoutBuilder_HID___c()   {
}
