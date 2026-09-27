#pragma once
// IWYU pragma private; include "System/Threading/AsyncFlowControl.hpp"
#include "System/Threading/zzzz__AsyncFlowControl_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::AsyncFlowControl.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AsyncFlowControl::*)()>(&::System::Threading::AsyncFlowControl::Setup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa34b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AsyncFlowControl.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AsyncFlowControl::*)()>(&::System::Threading::AsyncFlowControl::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa34b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AsyncFlowControl.Undo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AsyncFlowControl::*)()>(&::System::Threading::AsyncFlowControl::Undo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa34b734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Undo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AsyncFlowControl.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Threading::AsyncFlowControl::*)()>(&::System::Threading::AsyncFlowControl::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa34b8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                    {::i2c::class_of<::System::Threading::AsyncFlowControl>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AsyncFlowControl.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::AsyncFlowControl::*)(::System::Object*)>(&::System::Threading::AsyncFlowControl::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa34b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                    {::i2c::class_of<::System::Threading::AsyncFlowControl>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::AsyncFlowControl.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::AsyncFlowControl::*)(::System::Threading::AsyncFlowControl)>(&::System::Threading::AsyncFlowControl::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa34ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Equals", {}, {::i2c::type_of<::System::Threading::AsyncFlowControl>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::AsyncFlowControl::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Threading::AsyncFlowControl::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Threading::AsyncFlowControl::Undo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Undo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t System::Threading::AsyncFlowControl::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Threading::AsyncFlowControl>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Threading::AsyncFlowControl::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Threading::AsyncFlowControl>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::Threading::AsyncFlowControl::Equals(::System::Threading::AsyncFlowControl  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::AsyncFlowControl>(),
                        {"Equals", {}, {::i2c::type_of<::System::Threading::AsyncFlowControl>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Threading::AsyncFlowControl::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::AsyncFlowControl::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "useEC", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_thread", ty: "::System::Threading::Thread*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Threading::AsyncFlowControl::AsyncFlowControl(bool  useEC, ::System::Threading::ExecutionContext*  _ec, ::System::Threading::Thread*  _thread) noexcept  {
this->useEC = useEC;
this->_ec = _ec;
this->_thread = _thread;
}
// Ctor Parameters []
constexpr ::System::Threading::AsyncFlowControl::AsyncFlowControl()   {
}
