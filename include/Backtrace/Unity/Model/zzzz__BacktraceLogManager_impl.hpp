#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceLogManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceLogManager_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceReport_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceUnityMessage_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::BacktraceLogManager::*)(uint32_t)>(&::Backtrace::Unity::Model::BacktraceLogManager::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f01128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Backtrace::Unity::Model::BacktraceLogManager::*)()>(&::Backtrace::Unity::Model::BacktraceLogManager::get_Size)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f11f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager.get_Disabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceLogManager::*)()>(&::Backtrace::Unity::Model::BacktraceLogManager::get_Disabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f00324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"get_Disabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceLogManager::*)(::Backtrace::Unity::Model::BacktraceReport*)>(&::Backtrace::Unity::Model::BacktraceLogManager::Enqueue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5eff9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"Enqueue", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceLogManager::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::Backtrace::Unity::Model::BacktraceLogManager::Enqueue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f11fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"Enqueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager.Enqueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::BacktraceLogManager::*)(::Backtrace::Unity::Model::BacktraceUnityMessage*)>(&::Backtrace::Unity::Model::BacktraceLogManager::Enqueue)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5f017a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"Enqueue", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::BacktraceLogManager.ToSourceCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::BacktraceLogManager::*)()>(&::Backtrace::Unity::Model::BacktraceLogManager::ToSourceCode)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f00334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"ToSourceCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::StringW>*& Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_get_LogQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_get_LogQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogQueue;
}
constexpr void Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_set_LogQueue(::System::Collections::Generic::Queue_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogQueue = value;
}
constexpr ::System::Object*& Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_get_lockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObject;
}
constexpr ::System::Object* const& Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_get_lockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObject;
}
constexpr void Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_set_lockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockObject = value;
}
constexpr uint32_t& Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_get__limit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limit;
}
constexpr uint32_t const& Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_get__limit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____limit;
}
constexpr void Backtrace::Unity::Model::BacktraceLogManager::__cordl_internal_set__limit(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____limit = value;
}
inline void Backtrace::Unity::Model::BacktraceLogManager::_ctor(uint32_t  numberOfLogs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfLogs);
}
inline int32_t Backtrace::Unity::Model::BacktraceLogManager::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::BacktraceLogManager::get_Disabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"get_Disabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::BacktraceLogManager::Enqueue(::Backtrace::Unity::Model::BacktraceReport*  report)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"Enqueue", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceReport*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, report);
}
inline bool Backtrace::Unity::Model::BacktraceLogManager::Enqueue(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"Enqueue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message, stackTrace, type);
}
inline bool Backtrace::Unity::Model::BacktraceLogManager::Enqueue(::Backtrace::Unity::Model::BacktraceUnityMessage*  unityMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"Enqueue", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceUnityMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, unityMessage);
}
inline ::StringW Backtrace::Unity::Model::BacktraceLogManager::ToSourceCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::BacktraceLogManager*>(),
                        {"ToSourceCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::BacktraceLogManager* Backtrace::Unity::Model::BacktraceLogManager::New_ctor(uint32_t  numberOfLogs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::BacktraceLogManager*>(numberOfLogs));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::BacktraceLogManager::BacktraceLogManager()   {
}
