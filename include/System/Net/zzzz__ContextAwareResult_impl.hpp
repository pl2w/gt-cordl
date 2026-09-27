#pragma once
// IWYU pragma private; include "System/Net/ContextAwareResult.hpp"
#include "System/Net/zzzz__ContextAwareResult_StateFlags_impl.hpp"
#include "System/Net/zzzz__LazyAsyncResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Net/zzzz__CallbackClosure_def.hpp"
#include "System/Net/zzzz__ContextAwareResult_StateFlags_def.hpp"
#include "System/Net/zzzz__ContextAwareResult_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::ContextAwareResult.SafeCaptureIdentity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::SafeCaptureIdentity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xada6db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"SafeCaptureIdentity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CleanupInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::CleanupInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xada6db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"CleanupInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(&::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada6dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(bool, bool, ::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(&::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xada6dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(bool, bool, bool, ::System::Object*, ::System::Object*, ::System::AsyncCallback*)>(&::System::Net::ContextAwareResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xada6e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.get_ContextCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::get_ContextCopy)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xada6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"get_ContextCopy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.StartPostingAsyncOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada71e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"StartPostingAsyncOp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.StartPostingAsyncOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::ContextAwareResult::*)(bool)>(&::System::Net::ContextAwareResult::StartPostingAsyncOp)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xada71e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"StartPostingAsyncOp", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.FinishPostingAsyncOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::FinishPostingAsyncOp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xada72e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"FinishPostingAsyncOp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.FinishPostingAsyncOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ContextAwareResult::*)(::by_ref<::System::Net::CallbackClosure*>)>(&::System::Net::ContextAwareResult::FinishPostingAsyncOp)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xada7714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"FinishPostingAsyncOp", {}, {::i2c::type_of<::by_ref<::System::Net::CallbackClosure*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::Cleanup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xada78b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                    {::i2c::class_of<::System::Net::ContextAwareResult*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CaptureOrComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ContextAwareResult::*)(::by_ref<::System::Threading::ExecutionContext*>, bool)>(&::System::Net::ContextAwareResult::CaptureOrComplete)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xada7328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"CaptureOrComplete", {}, {::i2c::type_of<::by_ref<::System::Threading::ExecutionContext*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)(::System::IntPtr)>(&::System::Net::ContextAwareResult::Complete)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xada7b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                    {::i2c::class_of<::System::Net::ContextAwareResult*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.CompleteCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::CompleteCallback)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xada7e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"CompleteCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult.get_RemoteEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPoint* (::System::Net::ContextAwareResult::*)()>(&::System::Net::ContextAwareResult::get_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada7eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                    {::i2c::class_of<::System::Net::ContextAwareResult*>(), 10}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Threading::ExecutionContext*& System::Net::ContextAwareResult::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::System::Threading::ExecutionContext* const& System::Net::ContextAwareResult::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void System::Net::ContextAwareResult::__cordl_internal_set__context(::System::Threading::ExecutionContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr ::System::Object*& System::Net::ContextAwareResult::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr ::System::Object* const& System::Net::ContextAwareResult::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
constexpr void System::Net::ContextAwareResult::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags& System::Net::ContextAwareResult::__cordl_internal_get__flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr ::GlobalNamespace::ContextAwareResult_StateFlags const& System::Net::ContextAwareResult::__cordl_internal_get__flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr void System::Net::ContextAwareResult::__cordl_internal_set__flags(::GlobalNamespace::ContextAwareResult_StateFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flags = value;
}
inline void System::Net::ContextAwareResult::SafeCaptureIdentity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"SafeCaptureIdentity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::CleanupInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"CleanupInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult::_ctor(::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, myObject, myState, myCallBack);
}
inline void System::Net::ContextAwareResult::_ctor(bool  captureIdentity, bool  forceCaptureContext, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureIdentity, forceCaptureContext, myObject, myState, myCallBack);
}
inline void System::Net::ContextAwareResult::_ctor(bool  captureIdentity, bool  forceCaptureContext, bool  threadSafeContextCopy, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::AsyncCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack);
}
inline ::System::Threading::ExecutionContext* System::Net::ContextAwareResult::get_ContextCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"get_ContextCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(this, ___internal_method);
}
inline ::System::Object* System::Net::ContextAwareResult::StartPostingAsyncOp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"StartPostingAsyncOp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* System::Net::ContextAwareResult::StartPostingAsyncOp(bool  lockCapture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"StartPostingAsyncOp", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, lockCapture);
}
inline bool System::Net::ContextAwareResult::FinishPostingAsyncOp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"FinishPostingAsyncOp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::ContextAwareResult::FinishPostingAsyncOp(::by_ref<::System::Net::CallbackClosure*>  closure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"FinishPostingAsyncOp", {}, {::i2c::type_of<::by_ref<::System::Net::CallbackClosure*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, closure);
}
inline void System::Net::ContextAwareResult::Cleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ContextAwareResult*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::ContextAwareResult::CaptureOrComplete(::by_ref<::System::Threading::ExecutionContext*>  cachedContext, bool  returnContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"CaptureOrComplete", {}, {::i2c::type_of<::by_ref<::System::Threading::ExecutionContext*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cachedContext, returnContext);
}
inline void System::Net::ContextAwareResult::Complete(::System::IntPtr  userToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ContextAwareResult*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userToken);
}
inline void System::Net::ContextAwareResult::CompleteCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult*>(),
                        {"CompleteCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::ContextAwareResult::get_RemoteEndPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::ContextAwareResult*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*>(this, ___internal_method);
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult*>(myObject, myState, myCallBack));
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(bool  captureIdentity, bool  forceCaptureContext, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult*>(captureIdentity, forceCaptureContext, myObject, myState, myCallBack));
}
inline ::System::Net::ContextAwareResult* System::Net::ContextAwareResult::New_ctor(bool  captureIdentity, bool  forceCaptureContext, bool  threadSafeContextCopy, ::System::Object*  myObject, ::System::Object*  myState, ::System::AsyncCallback*  myCallBack)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult*>(captureIdentity, forceCaptureContext, threadSafeContextCopy, myObject, myState, myCallBack));
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult::ContextAwareResult()   {
}
//  Writing Method size for method: ::System::Net::ContextAwareResult___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult___c::*)()>(&::System::Net::ContextAwareResult___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xada7f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ContextAwareResult___c._Complete_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ContextAwareResult___c::*)(::System::Object*)>(&::System::Net::ContextAwareResult___c::_Complete_b__17_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xada7f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult___c*>(),
                        {"<Complete>b__17_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::ContextAwareResult___c::setStaticF___9(::System::Net::ContextAwareResult___c*  value)  {
::cordl_internals::setStaticField<::System::Net::ContextAwareResult___c*, "<>9", ::System::Net::ContextAwareResult___c*>(std::forward<::System::Net::ContextAwareResult___c*>(value));
}
inline ::System::Net::ContextAwareResult___c* System::Net::ContextAwareResult___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::ContextAwareResult___c*, "<>9", ::System::Net::ContextAwareResult___c*>();
}
inline void System::Net::ContextAwareResult___c::setStaticF___9__17_0(::System::Threading::ContextCallback*  value)  {
::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "<>9__17_0", ::System::Net::ContextAwareResult___c*>(std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Net::ContextAwareResult___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "<>9__17_0", ::System::Net::ContextAwareResult___c*>();
}
inline void System::Net::ContextAwareResult___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ContextAwareResult___c::_Complete_b__17_0(::System::Object*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ContextAwareResult___c*>(),
                        {"<Complete>b__17_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Net::ContextAwareResult___c* System::Net::ContextAwareResult___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ContextAwareResult___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::ContextAwareResult___c::ContextAwareResult___c()   {
}
