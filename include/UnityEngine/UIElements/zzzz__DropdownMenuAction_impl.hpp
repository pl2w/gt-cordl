#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DropdownMenuAction.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_Status_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_Status_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::DropdownMenuAction::*)()>(&::UnityEngine::UIElements::DropdownMenuAction::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88b50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::GlobalNamespace::DropdownMenuAction_Status)>(&::UnityEngine::UIElements::DropdownMenuAction::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88b514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"set_status", {}, {::i2c::type_of<::GlobalNamespace::DropdownMenuAction_Status>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_eventInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::DropdownMenuEventInfo*)>(&::UnityEngine::UIElements::DropdownMenuAction::set_eventInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88b51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"set_eventInfo", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuEventInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_userData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::System::Object*)>(&::UnityEngine::UIElements::DropdownMenuAction::set_userData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88b524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"set_userData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.AlwaysEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DropdownMenuAction_Status (*)(::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::DropdownMenuAction::AlwaysEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88b52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"AlwaysEnabled", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.AlwaysDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DropdownMenuAction_Status (*)(::UnityEngine::UIElements::DropdownMenuAction*)>(&::UnityEngine::UIElements::DropdownMenuAction::AlwaysDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb88b534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"AlwaysDisabled", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*, ::System::Object*)>(&::UnityEngine::UIElements::DropdownMenuAction::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb88b53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(), ::i2c::type_of<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.UpdateActionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::DropdownMenuEventInfo*)>(&::UnityEngine::UIElements::DropdownMenuAction::UpdateActionStatus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb88b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"UpdateActionStatus", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuEventInfo*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_set__name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name_k__BackingField = value;
}
constexpr ::GlobalNamespace::DropdownMenuAction_Status& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr ::GlobalNamespace::DropdownMenuAction_Status const& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_set__status_k__BackingField(::GlobalNamespace::DropdownMenuAction_Status  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo*& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__eventInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventInfo_k__BackingField;
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo* const& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__eventInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventInfo_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_set__eventInfo_k__BackingField(::UnityEngine::UIElements::DropdownMenuEventInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventInfo_k__BackingField = value;
}
constexpr ::System::Object*& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__userData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData_k__BackingField;
}
constexpr ::System::Object* const& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get__userData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userData_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_set__userData_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userData_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get_actionCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionCallback;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>* const& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get_actionCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionCallback;
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_set_actionCallback(::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionCallback = value;
}
constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get_actionStatusCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionStatusCallback;
}
constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>* const& UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_get_actionStatusCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actionStatusCallback;
}
constexpr void UnityEngine::UIElements::DropdownMenuAction::__cordl_internal_set_actionStatusCallback(::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actionStatusCallback = value;
}
inline ::StringW UnityEngine::UIElements::DropdownMenuAction::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DropdownMenuAction::set_status(::GlobalNamespace::DropdownMenuAction_Status  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"set_status", {}, {::i2c::type_of<::GlobalNamespace::DropdownMenuAction_Status>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DropdownMenuAction::set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"set_eventInfo", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuEventInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::DropdownMenuAction::set_userData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"set_userData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::DropdownMenuAction_Status UnityEngine::UIElements::DropdownMenuAction::AlwaysEnabled(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"AlwaysEnabled", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DropdownMenuAction_Status>(nullptr, ___internal_method, a);
}
inline ::GlobalNamespace::DropdownMenuAction_Status UnityEngine::UIElements::DropdownMenuAction::AlwaysDisabled(::UnityEngine::UIElements::DropdownMenuAction*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"AlwaysDisabled", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DropdownMenuAction_Status>(nullptr, ___internal_method, a);
}
inline void UnityEngine::UIElements::DropdownMenuAction::_ctor(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  actionStatusCallback, ::System::Object*  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*>(), ::i2c::type_of<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionName, actionCallback, actionStatusCallback, userData);
}
inline void UnityEngine::UIElements::DropdownMenuAction::UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo*  eventInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::DropdownMenuAction*>(),
                        {"UpdateActionStatus", {}, {::i2c::type_of<::UnityEngine::UIElements::DropdownMenuEventInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventInfo);
}
inline ::UnityEngine::UIElements::DropdownMenuAction* UnityEngine::UIElements::DropdownMenuAction::New_ctor(::StringW  actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction*>*  actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction*,::GlobalNamespace::DropdownMenuAction_Status>*  actionStatusCallback, ::System::Object*  userData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenuAction*>(actionName, actionCallback, actionStatusCallback, userData));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuAction::DropdownMenuAction()   {
}
