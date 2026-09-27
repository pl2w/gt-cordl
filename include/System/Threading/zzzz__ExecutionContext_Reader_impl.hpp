#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext_Reader.hpp"
#include "System/Threading/zzzz__ExecutionContext_Reader_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_Reader_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ExecutionContext_Reader::*)(::System::Threading::ExecutionContext*)>(&::GlobalNamespace::ExecutionContext_Reader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa34d058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::ExecutionContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.DangerousGetRawExecutionContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::ExecutionContext* (::GlobalNamespace::ExecutionContext_Reader::*)()>(&::GlobalNamespace::ExecutionContext_Reader::DangerousGetRawExecutionContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa34d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"DangerousGetRawExecutionContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ExecutionContext_Reader::*)()>(&::GlobalNamespace::ExecutionContext_Reader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa34d068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.IsDefaultFTContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ExecutionContext_Reader::*)(bool)>(&::GlobalNamespace::ExecutionContext_Reader::IsDefaultFTContext)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa34d078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"IsDefaultFTContext", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.get_IsFlowSuppressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ExecutionContext_Reader::*)()>(&::GlobalNamespace::ExecutionContext_Reader::get_IsFlowSuppressed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa34d094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_IsFlowSuppressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.get_SynchronizationContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::GlobalNamespace::ExecutionContext_Reader::*)()>(&::GlobalNamespace::ExecutionContext_Reader::get_SynchronizationContext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa34d0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_SynchronizationContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.get_SynchronizationContextNoFlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::SynchronizationContext* (::GlobalNamespace::ExecutionContext_Reader::*)()>(&::GlobalNamespace::ExecutionContext_Reader::get_SynchronizationContextNoFlow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa34d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_SynchronizationContextNoFlow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.get_LogicalCallContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LogicalCallContext_Reader (::GlobalNamespace::ExecutionContext_Reader::*)()>(&::GlobalNamespace::ExecutionContext_Reader::get_LogicalCallContext)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa34d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_LogicalCallContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExecutionContext_Reader.HasSameLocalValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ExecutionContext_Reader::*)(::System::Threading::ExecutionContext*)>(&::GlobalNamespace::ExecutionContext_Reader::HasSameLocalValues)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa34d110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"HasSameLocalValues", {}, {::i2c::type_of<::System::Threading::ExecutionContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ExecutionContext_Reader::_ctor(::System::Threading::ExecutionContext*  ec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::ExecutionContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ec);
}
inline ::System::Threading::ExecutionContext* GlobalNamespace::ExecutionContext_Reader::DangerousGetRawExecutionContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"DangerousGetRawExecutionContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ExecutionContext*>(*this, ___internal_method);
}
inline bool GlobalNamespace::ExecutionContext_Reader::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::ExecutionContext_Reader::IsDefaultFTContext(bool  ignoreSyncCtx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"IsDefaultFTContext", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ignoreSyncCtx);
}
inline bool GlobalNamespace::ExecutionContext_Reader::get_IsFlowSuppressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_IsFlowSuppressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* GlobalNamespace::ExecutionContext_Reader::get_SynchronizationContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_SynchronizationContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(*this, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* GlobalNamespace::ExecutionContext_Reader::get_SynchronizationContextNoFlow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_SynchronizationContextNoFlow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*>(*this, ___internal_method);
}
inline ::GlobalNamespace::LogicalCallContext_Reader GlobalNamespace::ExecutionContext_Reader::get_LogicalCallContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"get_LogicalCallContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LogicalCallContext_Reader>(*this, ___internal_method);
}
inline bool GlobalNamespace::ExecutionContext_Reader::HasSameLocalValues(::System::Threading::ExecutionContext*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ExecutionContext_Reader>(),
                        {"HasSameLocalValues", {}, {::i2c::type_of<::System::Threading::ExecutionContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_ec", ty: "::System::Threading::ExecutionContext*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ExecutionContext_Reader::ExecutionContext_Reader(::System::Threading::ExecutionContext*  m_ec) noexcept  {
this->m_ec = m_ec;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExecutionContext_Reader::ExecutionContext_Reader()   {
}
