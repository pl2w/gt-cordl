#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ActionResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_Status_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ActionResult_Status_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ActionResult_Status (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::get_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb082dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_status", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::GlobalNamespace::ActionResult_Status)>(&::UnityEngine::ProBuilder::ActionResult::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb082dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"set_status", {}, {::i2c::type_of<::GlobalNamespace::ActionResult_Status>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_notification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::get_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb082dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_notification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.set_notification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::StringW)>(&::UnityEngine::ProBuilder::ActionResult::set_notification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb082de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"set_notification", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ProBuilder::ActionResult::*)(::GlobalNamespace::ActionResult_Status, ::StringW)>(&::UnityEngine::ProBuilder::ActionResult::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb082de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ActionResult_Status>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::ProBuilder::ActionResult*)>(&::UnityEngine::ProBuilder::ActionResult::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb082e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::ProBuilder::ActionResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.ToBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ProBuilder::ActionResult::*)()>(&::UnityEngine::ProBuilder::ActionResult::ToBool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb082e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"ToBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.FromBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool)>(&::UnityEngine::ProBuilder::ActionResult::FromBool)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb082e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"FromBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_Success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_Success)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb082ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_Success", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_NoSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_NoSelection)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb082f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_NoSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::ActionResult.get_UserCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&::UnityEngine::ProBuilder::ActionResult::get_UserCanceled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb082fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_UserCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ActionResult_Status& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr ::GlobalNamespace::ActionResult_Status const& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____status_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::ActionResult::__cordl_internal_set__status_k__BackingField(::GlobalNamespace::ActionResult_Status  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____status_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__notification_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notification_k__BackingField;
}
constexpr ::StringW const& UnityEngine::ProBuilder::ActionResult::__cordl_internal_get__notification_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notification_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::ActionResult::__cordl_internal_set__notification_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notification_k__BackingField = value;
}
inline ::GlobalNamespace::ActionResult_Status UnityEngine::ProBuilder::ActionResult::get_status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ActionResult_Status>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ActionResult::set_status(::GlobalNamespace::ActionResult_Status  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"set_status", {}, {::i2c::type_of<::GlobalNamespace::ActionResult_Status>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::ProBuilder::ActionResult::get_notification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_notification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::ActionResult::set_notification(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"set_notification", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ProBuilder::ActionResult::_ctor(::GlobalNamespace::ActionResult_Status  status, ::StringW  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ActionResult_Status>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, notification);
}
inline bool UnityEngine::ProBuilder::ActionResult::op_Implicit_bool(::UnityEngine::ProBuilder::ActionResult*  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::ProBuilder::ActionResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, res);
}
inline bool UnityEngine::ProBuilder::ActionResult::ToBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"ToBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::ActionResult::FromBool(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"FromBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, success);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_Success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_Success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_NoSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_NoSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::get_UserCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ProBuilder::ActionResult*>(),
                        {"get_UserCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::ActionResult*>(nullptr, ___internal_method);
}
inline ::UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::ActionResult::New_ctor(::GlobalNamespace::ActionResult_Status  status, ::StringW  notification)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::ActionResult*>(status, notification));
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::ActionResult::ActionResult()   {
}
