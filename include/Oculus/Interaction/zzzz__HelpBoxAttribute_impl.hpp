#pragma once
// IWYU pragma private; include "Oculus/Interaction/HelpBoxAttribute.hpp"
#include "Oculus/Interaction/zzzz__ConditionalHideAttribute_DisplayMode_impl.hpp"
#include "Oculus/Interaction/zzzz__HelpBoxAttribute_MessageType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Oculus/Interaction/zzzz__HelpBoxAttribute_def.hpp"
#include "Oculus/Interaction/zzzz__ConditionalHideAttribute_DisplayMode_def.hpp"
#include "Oculus/Interaction/zzzz__HelpBoxAttribute_MessageType_def.hpp"
#include "Oculus/Interaction/zzzz__HelpBoxAttribute_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::HelpBoxAttribute::*)()>(&::Oculus::Interaction::HelpBoxAttribute::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::StringW)>(&::Oculus::Interaction::HelpBoxAttribute::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::HelpBoxAttribute::*)()>(&::Oculus::Interaction::HelpBoxAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::System::Object*)>(&::Oculus::Interaction::HelpBoxAttribute::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Value", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HelpBoxAttribute_MessageType (::Oculus::Interaction::HelpBoxAttribute::*)()>(&::Oculus::Interaction::HelpBoxAttribute::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::GlobalNamespace::HelpBoxAttribute_MessageType)>(&::Oculus::Interaction::HelpBoxAttribute::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Type", {}, {::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.get_Display
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConditionalHideAttribute_DisplayMode (::Oculus::Interaction::HelpBoxAttribute::*)()>(&::Oculus::Interaction::HelpBoxAttribute::get_Display)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Display", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute.set_Display
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::GlobalNamespace::ConditionalHideAttribute_DisplayMode)>(&::Oculus::Interaction::HelpBoxAttribute::set_Display)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3ffa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Display", {}, {::i2c::type_of<::GlobalNamespace::ConditionalHideAttribute_DisplayMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::StringW)>(&::Oculus::Interaction::HelpBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3ffa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::StringW, ::GlobalNamespace::HelpBoxAttribute_MessageType)>(&::Oculus::Interaction::HelpBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3ffae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::StringW, ::GlobalNamespace::HelpBoxAttribute_MessageType, ::System::Object*)>(&::Oculus::Interaction::HelpBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ffb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute::*)(::StringW, ::GlobalNamespace::HelpBoxAttribute_MessageType, ::System::Object*, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode)>(&::Oculus::Interaction::HelpBoxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3ffb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::ConditionalHideAttribute_DisplayMode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Message_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr ::StringW const& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Message_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr void Oculus::Interaction::HelpBoxAttribute::__cordl_internal_set__Message_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Message_k__BackingField = value;
}
constexpr ::System::Object*& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Value_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
constexpr ::System::Object* const& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Value_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Value_k__BackingField;
}
constexpr void Oculus::Interaction::HelpBoxAttribute::__cordl_internal_set__Value_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Value_k__BackingField = value;
}
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Type_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType const& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Type_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Type_k__BackingField;
}
constexpr void Oculus::Interaction::HelpBoxAttribute::__cordl_internal_set__Type_k__BackingField(::GlobalNamespace::HelpBoxAttribute_MessageType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Type_k__BackingField = value;
}
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Display_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Display_k__BackingField;
}
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const& Oculus::Interaction::HelpBoxAttribute::__cordl_internal_get__Display_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Display_k__BackingField;
}
constexpr void Oculus::Interaction::HelpBoxAttribute::__cordl_internal_set__Display_k__BackingField(::GlobalNamespace::ConditionalHideAttribute_DisplayMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Display_k__BackingField = value;
}
inline ::StringW Oculus::Interaction::HelpBoxAttribute::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Interaction::HelpBoxAttribute::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Oculus::Interaction::HelpBoxAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Oculus::Interaction::HelpBoxAttribute::set_Value(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Value", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::HelpBoxAttribute_MessageType Oculus::Interaction::HelpBoxAttribute::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HelpBoxAttribute_MessageType>(this, ___internal_method);
}
inline void Oculus::Interaction::HelpBoxAttribute::set_Type(::GlobalNamespace::HelpBoxAttribute_MessageType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Type", {}, {::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ConditionalHideAttribute_DisplayMode Oculus::Interaction::HelpBoxAttribute::get_Display()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"get_Display", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConditionalHideAttribute_DisplayMode>(this, ___internal_method);
}
inline void Oculus::Interaction::HelpBoxAttribute::set_Display(::GlobalNamespace::ConditionalHideAttribute_DisplayMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {"set_Display", {}, {::i2c::type_of<::GlobalNamespace::ConditionalHideAttribute_DisplayMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HelpBoxAttribute::_ctor(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Oculus::Interaction::HelpBoxAttribute::_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type);
}
inline void Oculus::Interaction::HelpBoxAttribute::_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type, value);
}
inline void Oculus::Interaction::HelpBoxAttribute::_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  display)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::HelpBoxAttribute_MessageType>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::GlobalNamespace::ConditionalHideAttribute_DisplayMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type, value, display);
}
inline ::Oculus::Interaction::HelpBoxAttribute* Oculus::Interaction::HelpBoxAttribute::New_ctor(::StringW  message)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HelpBoxAttribute*>(message));
}
inline ::Oculus::Interaction::HelpBoxAttribute* Oculus::Interaction::HelpBoxAttribute::New_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HelpBoxAttribute*>(message, type));
}
inline ::Oculus::Interaction::HelpBoxAttribute* Oculus::Interaction::HelpBoxAttribute::New_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HelpBoxAttribute*>(message, type, value));
}
inline ::Oculus::Interaction::HelpBoxAttribute* Oculus::Interaction::HelpBoxAttribute::New_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  display)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HelpBoxAttribute*>(message, type, value, display));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HelpBoxAttribute::HelpBoxAttribute()   {
}
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::*)(::System::Object*, ::System::IntPtr)>(&::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa3ffbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::*)()>(&::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa3ffc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(),
                    {::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::*)(::System::AsyncCallback*, ::System::Object*)>(&::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa3ffca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(),
                    {::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::*)(::System::IAsyncResult*)>(&::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa3ffcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(),
                    {::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IAsyncResult* Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline bool Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition* Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*>(object, method));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition::HelpBoxAttribute_HelpBoxCondition()   {
}
