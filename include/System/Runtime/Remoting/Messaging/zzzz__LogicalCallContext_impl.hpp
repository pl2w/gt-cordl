#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextRemotingData_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CallContextSecurityData_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__LogicalCallContext_Reader_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1b12e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xa1b12e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa1b169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::Clone)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0xa1b1a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.Merge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::Merge)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa1a293c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"Merge", {}, {::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.get_HasInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa1a28dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"get_HasInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.get_HasUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa1b19e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"get_HasUserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::LogicalCallContext.get_Datastore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&::System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa1b162c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"get_Datastore", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_Datastore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Datastore;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_Datastore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Datastore;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_set_m_Datastore(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Datastore = value;
}
constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData*& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_RemotingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RemotingData;
}
constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData* const& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_RemotingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RemotingData;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_set_m_RemotingData(::System::Runtime::Remoting::Messaging::CallContextRemotingData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RemotingData = value;
}
constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData*& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_SecurityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecurityData;
}
constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData* const& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_SecurityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecurityData;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_set_m_SecurityData(::System::Runtime::Remoting::Messaging::CallContextSecurityData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecurityData = value;
}
constexpr ::System::Object*& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_HostContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HostContext;
}
constexpr ::System::Object* const& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_HostContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HostContext;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_set_m_HostContext(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HostContext = value;
}
constexpr bool& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_IsCorrelationMgr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsCorrelationMgr;
}
constexpr bool const& System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_get_m_IsCorrelationMgr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsCorrelationMgr;
}
constexpr void System::Runtime::Remoting::Messaging::LogicalCallContext::__cordl_internal_set_m_IsCorrelationMgr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsCorrelationMgr = value;
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::setStaticF_s_callContextType(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "s_callContextType", ::System::Runtime::Remoting::Messaging::LogicalCallContext*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Runtime::Remoting::Messaging::LogicalCallContext::getStaticF_s_callContextType()  {
return ::cordl_internals::getStaticField<::System::Type*, "s_callContextType", ::System::Runtime::Remoting::Messaging::LogicalCallContext*>();
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::LogicalCallContext::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Remoting::Messaging::LogicalCallContext::Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext*  lc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"Merge", {}, {::i2c::type_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lc);
}
inline bool System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"get_HasInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"get_HasUserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(),
                        {"get_Datastore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::LogicalCallContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::LogicalCallContext*>());
}
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::LogicalCallContext::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::Messaging::LogicalCallContext*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Runtime::Remoting::Messaging::LogicalCallContext::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Runtime::Remoting::Messaging::LogicalCallContext::i___System__Runtime__Serialization__ISerializable() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::Runtime::Remoting::Messaging::LogicalCallContext::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Runtime::Remoting::Messaging::LogicalCallContext::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext::LogicalCallContext()   {
}
