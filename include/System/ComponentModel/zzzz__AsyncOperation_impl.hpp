#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__AsyncOperation_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)(::System::Object*, ::System::Threading::SynchronizationContext*)>(&::System::ComponentModel::AsyncOperation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad44ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::Finalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad45058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                    {::i2c::class_of<::System::ComponentModel::AsyncOperation*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.get_UserSuppliedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::get_UserSuppliedState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad450f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"get_UserSuppliedState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.get_SynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad450fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"get_SynchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.Post
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::ComponentModel::AsyncOperation::Post)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"Post", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.PostOperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)(::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::ComponentModel::AsyncOperation::PostOperationCompleted)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xad4516c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"PostOperationCompleted", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.OperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::OperationCompleted)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad4525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"OperationCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.PostCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)(::System::Threading::SendOrPostCallback*, ::System::Object*, bool)>(&::System::ComponentModel::AsyncOperation::PostCore)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad4510c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"PostCore", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.OperationCompletedCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::OperationCompletedCore)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xad45188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"OperationCompletedCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.VerifyNotCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::VerifyNotCompleted)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad4527c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"VerifyNotCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.VerifyDelegateNotNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)(::System::Threading::SendOrPostCallback*)>(&::System::ComponentModel::AsyncOperation::VerifyDelegateNotNull)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xad452d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"VerifyDelegateNotNull", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation.CreateOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AsyncOperation* (*)(::System::Object*, ::System::Threading::SynchronizationContext*)>(&::System::ComponentModel::AsyncOperation::CreateOperation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xad45340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"CreateOperation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AsyncOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::AsyncOperation::*)()>(&::System::ComponentModel::AsyncOperation::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xad453a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SynchronizationContext*& System::ComponentModel::AsyncOperation::__cordl_internal_get__syncContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncContext;
}
constexpr ::System::Threading::SynchronizationContext* const& System::ComponentModel::AsyncOperation::__cordl_internal_get__syncContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncContext;
}
constexpr void System::ComponentModel::AsyncOperation::__cordl_internal_set__syncContext(::System::Threading::SynchronizationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncContext = value;
}
constexpr ::System::Object*& System::ComponentModel::AsyncOperation::__cordl_internal_get__userSuppliedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userSuppliedState;
}
constexpr ::System::Object* const& System::ComponentModel::AsyncOperation::__cordl_internal_get__userSuppliedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____userSuppliedState;
}
constexpr void System::ComponentModel::AsyncOperation::__cordl_internal_set__userSuppliedState(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____userSuppliedState = value;
}
constexpr bool& System::ComponentModel::AsyncOperation::__cordl_internal_get__alreadyCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alreadyCompleted;
}
constexpr bool const& System::ComponentModel::AsyncOperation::__cordl_internal_get__alreadyCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____alreadyCompleted;
}
constexpr void System::ComponentModel::AsyncOperation::__cordl_internal_set__alreadyCompleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____alreadyCompleted = value;
}
inline void System::ComponentModel::AsyncOperation::_ctor(::System::Object*  userSuppliedState, ::System::Threading::SynchronizationContext*  syncContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userSuppliedState, syncContext);
}
inline void System::ComponentModel::AsyncOperation::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::AsyncOperation*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::AsyncOperation::get_UserSuppliedState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"get_UserSuppliedState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::ComponentModel::AsyncOperation::get_SynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"get_SynchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncOperation::Post(::System::Threading::SendOrPostCallback*  d, ::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"Post", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, arg);
}
inline void System::ComponentModel::AsyncOperation::PostOperationCompleted(::System::Threading::SendOrPostCallback*  d, ::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"PostOperationCompleted", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, arg);
}
inline void System::ComponentModel::AsyncOperation::OperationCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"OperationCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncOperation::PostCore(::System::Threading::SendOrPostCallback*  d, ::System::Object*  arg, bool  markCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"PostCore", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, arg, markCompleted);
}
inline void System::ComponentModel::AsyncOperation::OperationCompletedCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"OperationCompletedCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncOperation::VerifyNotCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"VerifyNotCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::AsyncOperation::VerifyDelegateNotNull(::System::Threading::SendOrPostCallback*  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"VerifyDelegateNotNull", {}, {::i2c::type_of<::System::Threading::SendOrPostCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline ::System::ComponentModel::AsyncOperation* System::ComponentModel::AsyncOperation::CreateOperation(::System::Object*  userSuppliedState, ::System::Threading::SynchronizationContext*  syncContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {"CreateOperation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Threading::SynchronizationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AsyncOperation*>(nullptr, ___internal_method, userSuppliedState, syncContext);
}
inline void System::ComponentModel::AsyncOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::AsyncOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::AsyncOperation* System::ComponentModel::AsyncOperation::New_ctor(::System::Object*  userSuppliedState, ::System::Threading::SynchronizationContext*  syncContext)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AsyncOperation*>(userSuppliedState, syncContext));
}
inline ::System::ComponentModel::AsyncOperation* System::ComponentModel::AsyncOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::AsyncOperation*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::AsyncOperation::AsyncOperation()   {
}
