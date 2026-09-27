#pragma once
// IWYU pragma private; include "GlobalNamespace/DearLemmingController.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DearLemmingController_def.hpp"
#include "GlobalNamespace/zzzz__DearLemmingController__CheckCanSubmit_d__16_def.hpp"
#include "GlobalNamespace/zzzz__DearLemmingController__SubmitMessage_d__17_def.hpp"
#include "GlobalNamespace/zzzz__DearLemmingController__WaitForLogin_d__22_def.hpp"
#include "GlobalNamespace/zzzz__DearLemmingController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::DearLemmingController> (*)()>(&::GlobalNamespace::DearLemmingController::get_instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a9c994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::DearLemmingController*)>(&::GlobalNamespace::DearLemmingController::set_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5a9c9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.add_OnCheckComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*)>(&::GlobalNamespace::DearLemmingController::add_OnCheckComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9ca34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"add_OnCheckComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.remove_OnCheckComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*)>(&::GlobalNamespace::DearLemmingController::remove_OnCheckComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9cae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"remove_OnCheckComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.add_OnSubmitComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*)>(&::GlobalNamespace::DearLemmingController::add_OnSubmitComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"add_OnSubmitComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.remove_OnSubmitComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*)>(&::GlobalNamespace::DearLemmingController::remove_OnSubmitComplete)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9cc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"remove_OnSubmitComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)()>(&::GlobalNamespace::DearLemmingController::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5a9ccf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.CheckCanSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)()>(&::GlobalNamespace::DearLemmingController::CheckCanSubmit)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a9cdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"CheckCanSubmit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.SubmitMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::StringW)>(&::GlobalNamespace::DearLemmingController::SubmitMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a9ce9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"SubmitMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.StartCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)()>(&::GlobalNamespace::DearLemmingController::StartCheck)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5a9cf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"StartCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.StartSubmit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::StringW)>(&::GlobalNamespace::DearLemmingController::StartSubmit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a9d06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"StartSubmit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.DoRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::DearLemmingController::*)(::StringW, ::StringW, bool)>(&::GlobalNamespace::DearLemmingController::DoRequest)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a9cfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"DoRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.HandleResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)(::StringW, bool)>(&::GlobalNamespace::DearLemmingController::HandleResponse)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a9d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController.WaitForLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::DearLemmingController::*)()>(&::GlobalNamespace::DearLemmingController::WaitForLogin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a9d248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"WaitForLogin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController::*)()>(&::GlobalNamespace::DearLemmingController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a9d30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DearLemmingController::__cordl_internal_get_maxRetriesOnFail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr int32_t const& GlobalNamespace::DearLemmingController::__cordl_internal_get_maxRetriesOnFail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRetriesOnFail;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_maxRetriesOnFail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRetriesOnFail = value;
}
constexpr int32_t& GlobalNamespace::DearLemmingController::__cordl_internal_get_checkRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkRetryCount;
}
constexpr int32_t const& GlobalNamespace::DearLemmingController::__cordl_internal_get_checkRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkRetryCount;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_checkRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkRetryCount = value;
}
constexpr int32_t& GlobalNamespace::DearLemmingController::__cordl_internal_get_submitRetryCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitRetryCount;
}
constexpr int32_t const& GlobalNamespace::DearLemmingController::__cordl_internal_get_submitRetryCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___submitRetryCount;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_submitRetryCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___submitRetryCount = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*& GlobalNamespace::DearLemmingController::__cordl_internal_get_OnCheckComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCheckComplete;
}
constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>* const& GlobalNamespace::DearLemmingController::__cordl_internal_get_OnCheckComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCheckComplete;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_OnCheckComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCheckComplete = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*& GlobalNamespace::DearLemmingController::__cordl_internal_get_OnSubmitComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSubmitComplete;
}
constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>* const& GlobalNamespace::DearLemmingController::__cordl_internal_get_OnSubmitComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSubmitComplete;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_OnSubmitComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSubmitComplete = value;
}
constexpr bool& GlobalNamespace::DearLemmingController::__cordl_internal_get_isChecking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isChecking;
}
constexpr bool const& GlobalNamespace::DearLemmingController::__cordl_internal_get_isChecking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isChecking;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_isChecking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isChecking = value;
}
constexpr bool& GlobalNamespace::DearLemmingController::__cordl_internal_get_isSubmitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubmitting;
}
constexpr bool const& GlobalNamespace::DearLemmingController::__cordl_internal_get_isSubmitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSubmitting;
}
constexpr void GlobalNamespace::DearLemmingController::__cordl_internal_set_isSubmitting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSubmitting = value;
}
inline void GlobalNamespace::DearLemmingController::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::DearLemmingController>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::DearLemmingController>, "<instance>k__BackingField", ::GlobalNamespace::DearLemmingController*>(std::forward<::UnityW<::GlobalNamespace::DearLemmingController>>(value));
}
inline ::UnityW<::GlobalNamespace::DearLemmingController> GlobalNamespace::DearLemmingController::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::DearLemmingController>, "<instance>k__BackingField", ::GlobalNamespace::DearLemmingController*>();
}
inline ::UnityW<::GlobalNamespace::DearLemmingController> GlobalNamespace::DearLemmingController::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::DearLemmingController>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DearLemmingController::set_instance(::GlobalNamespace::DearLemmingController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::DearLemmingController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::DearLemmingController::add_OnCheckComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"add_OnCheckComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DearLemmingController::remove_OnCheckComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"remove_OnCheckComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DearLemmingController::add_OnSubmitComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"add_OnSubmitComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DearLemmingController::remove_OnSubmitComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"remove_OnSubmitComplete", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DearLemmingController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingController::CheckCanSubmit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"CheckCanSubmit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingController::SubmitMessage(::StringW  messageText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"SubmitMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageText);
}
inline void GlobalNamespace::DearLemmingController::StartCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"StartCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingController::StartSubmit(::StringW  messageText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"StartSubmit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messageText);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::DearLemmingController::DoRequest(::StringW  endpoint, ::StringW  messageText, bool  isCheckRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"DoRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, endpoint, messageText, isCheckRequest);
}
inline void GlobalNamespace::DearLemmingController::HandleResponse(::StringW  json, bool  isCheckRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"HandleResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json, isCheckRequest);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::DearLemmingController::WaitForLogin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {"WaitForLogin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DearLemmingController* GlobalNamespace::DearLemmingController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DearLemmingController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DearLemmingController::DearLemmingController()   {
}
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController__DoRequest_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController__DoRequest_d__20::*)(int32_t)>(&::GlobalNamespace::DearLemmingController__DoRequest_d__20::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a9d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController__DoRequest_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController__DoRequest_d__20::*)()>(&::GlobalNamespace::DearLemmingController__DoRequest_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a9d508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController__DoRequest_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DearLemmingController__DoRequest_d__20::*)()>(&::GlobalNamespace::DearLemmingController__DoRequest_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5a9d50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController__DoRequest_d__20.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DearLemmingController__DoRequest_d__20::*)()>(&::GlobalNamespace::DearLemmingController__DoRequest_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9da08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController__DoRequest_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController__DoRequest_d__20::*)()>(&::GlobalNamespace::DearLemmingController__DoRequest_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a9da10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController__DoRequest_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DearLemmingController__DoRequest_d__20::*)()>(&::GlobalNamespace::DearLemmingController__DoRequest_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9da48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get_messageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageText;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get_messageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___messageText;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set_messageText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___messageText = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get_endpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpoint;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get_endpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endpoint;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set_endpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endpoint = value;
}
constexpr ::UnityW<::GlobalNamespace::DearLemmingController>& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::DearLemmingController> const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DearLemmingController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get_isCheckRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCheckRequest;
}
constexpr bool const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get_isCheckRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCheckRequest;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set_isCheckRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCheckRequest = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get__request_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get__request_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__2;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__2 = value;
}
constexpr bool& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get__retry_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr bool const& GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_get__retry_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retry_5__3;
}
constexpr void GlobalNamespace::DearLemmingController__DoRequest_d__20::__cordl_internal_set__retry_5__3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retry_5__3 = value;
}
inline void GlobalNamespace::DearLemmingController__DoRequest_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::DearLemmingController__DoRequest_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DearLemmingController__DoRequest_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DearLemmingController__DoRequest_d__20::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::DearLemmingController__DoRequest_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DearLemmingController__DoRequest_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::DearLemmingController__DoRequest_d__20* GlobalNamespace::DearLemmingController__DoRequest_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DearLemmingController__DoRequest_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::DearLemmingController__DoRequest_d__20::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::DearLemmingController__DoRequest_d__20::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::DearLemmingController__DoRequest_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::DearLemmingController__DoRequest_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DearLemmingController__DoRequest_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DearLemmingController__DoRequest_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DearLemmingController__DoRequest_d__20::DearLemmingController__DoRequest_d__20()   {
}
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController_DearLemmingResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController_DearLemmingResponse::*)()>(&::GlobalNamespace::DearLemmingController_DearLemmingResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9d324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_CanSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanSubmit;
}
constexpr bool const& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_CanSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanSubmit;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_set_CanSubmit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CanSubmit = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_NextSubmitTimeUtc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextSubmitTimeUtc;
}
constexpr ::System::Nullable_1<::System::DateTime> const& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_NextSubmitTimeUtc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextSubmitTimeUtc;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_set_NextSubmitTimeUtc(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextSubmitTimeUtc = value;
}
constexpr ::System::Nullable_1<double_t>& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_SecondsUntilNextSubmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilNextSubmit;
}
constexpr ::System::Nullable_1<double_t> const& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_SecondsUntilNextSubmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilNextSubmit;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_set_SecondsUntilNextSubmit(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsUntilNextSubmit = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_set_Error(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr int32_t& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_StatusCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr int32_t const& GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_get_StatusCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusCode;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingResponse::__cordl_internal_set_StatusCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusCode = value;
}
inline void GlobalNamespace::DearLemmingController_DearLemmingResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DearLemmingController_DearLemmingResponse* GlobalNamespace::DearLemmingController_DearLemmingResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DearLemmingController_DearLemmingResponse::DearLemmingController_DearLemmingResponse()   {
}
//  Writing Method size for method: ::GlobalNamespace::DearLemmingController_DearLemmingRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DearLemmingController_DearLemmingRequest::*)()>(&::GlobalNamespace::DearLemmingController_DearLemmingRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a9d31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController_DearLemmingRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipTitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipTitleId;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipTitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipTitleId;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_set_MothershipTitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipTitleId = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_set_MothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipEnvId = value;
}
constexpr ::StringW& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MessageText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageText;
}
constexpr ::StringW const& GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_get_MessageText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MessageText;
}
constexpr void GlobalNamespace::DearLemmingController_DearLemmingRequest::__cordl_internal_set_MessageText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MessageText = value;
}
inline void GlobalNamespace::DearLemmingController_DearLemmingRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DearLemmingController_DearLemmingRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DearLemmingController_DearLemmingRequest* GlobalNamespace::DearLemmingController_DearLemmingRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DearLemmingController_DearLemmingRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DearLemmingController_DearLemmingRequest::DearLemmingController_DearLemmingRequest()   {
}
