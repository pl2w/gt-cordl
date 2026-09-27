#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/LogicalCallContext_Reader.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_Reader_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LogicalCallContext_Reader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LogicalCallContext_Reader::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&::GlobalNamespace::LogicalCallContext_Reader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1b21fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LogicalCallContext_Reader.get_IsNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LogicalCallContext_Reader::*)()>(&::GlobalNamespace::LogicalCallContext_Reader::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1b2204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {"get_IsNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LogicalCallContext_Reader.get_HasInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LogicalCallContext_Reader::*)()>(&::GlobalNamespace::LogicalCallContext_Reader::get_HasInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa1b2214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {"get_HasInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LogicalCallContext_Reader.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (::GlobalNamespace::LogicalCallContext_Reader::*)()>(&::GlobalNamespace::LogicalCallContext_Reader::Clone)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa1b2224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LogicalCallContext_Reader::_ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ctx);
}
inline bool GlobalNamespace::LogicalCallContext_Reader::get_IsNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {"get_IsNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::LogicalCallContext_Reader::get_HasInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {"get_HasInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* GlobalNamespace::LogicalCallContext_Reader::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogicalCallContext_Reader>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ctx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LogicalCallContext_Reader::LogicalCallContext_Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext*  m_ctx) noexcept  {
this->m_ctx = m_ctx;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LogicalCallContext_Reader::LogicalCallContext_Reader()   {
}
