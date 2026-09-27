#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LogicalCallContext)
namespace GlobalNamespace {
struct LogicalCallContext_Reader;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Messaging {
class CallContextRemotingData;
}
namespace System::Runtime::Remoting::Messaging {
class CallContextSecurityData;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Messaging::LogicalCallContext*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Messaging::LogicalCallContext*, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// CS Name: System.Runtime.Remoting.Messaging.LogicalCallContext
class CORDL_TYPE LogicalCallContext : public ::System::Object {
public:
// Declarations
using Reader = ::GlobalNamespace::LogicalCallContext_Reader;

 __declspec(property(get=get_Datastore)) ::System::Collections::Hashtable*  Datastore;

 __declspec(property(get=get_HasInfo)) bool  HasInfo;

 __declspec(property(get=get_HasUserData)) bool  HasUserData;

/// @brief Field m_Datastore, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Datastore, put=__cordl_internal_set_m_Datastore)) ::System::Collections::Hashtable*  m_Datastore;

/// @brief Field m_HostContext, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HostContext, put=__cordl_internal_set_m_HostContext)) ::System::Object*  m_HostContext;

/// @brief Field m_IsCorrelationMgr, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsCorrelationMgr, put=__cordl_internal_set_m_IsCorrelationMgr)) bool  m_IsCorrelationMgr;

/// @brief Field m_RemotingData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RemotingData, put=__cordl_internal_set_m_RemotingData)) ::System::Runtime::Remoting::Messaging::CallContextRemotingData*  m_RemotingData;

/// @brief Field m_SecurityData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecurityData, put=__cordl_internal_set_m_SecurityData)) ::System::Runtime::Remoting::Messaging::CallContextSecurityData*  m_SecurityData;

/// @brief Field s_callContextType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_callContextType, put=setStaticF_s_callContextType)) ::System::Type*  s_callContextType;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Clone, addr 0xa1b1a10, size 0x65c, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method GetObjectData, addr 0xa1b169c, size 0x348, virtual true, abstract: false, final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Merge, addr 0xa1a293c, size 0x224, virtual false, abstract: false, final false
inline void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext*  lc) ;

static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* New_ctor() ;

static inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_m_Datastore() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_Datastore() ;

constexpr ::System::Object* const& __cordl_internal_get_m_HostContext() const;

constexpr ::System::Object*& __cordl_internal_get_m_HostContext() ;

constexpr bool const& __cordl_internal_get_m_IsCorrelationMgr() const;

constexpr bool& __cordl_internal_get_m_IsCorrelationMgr() ;

constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData* const& __cordl_internal_get_m_RemotingData() const;

constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData*& __cordl_internal_get_m_RemotingData() ;

constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData* const& __cordl_internal_get_m_SecurityData() const;

constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData*& __cordl_internal_get_m_SecurityData() ;

constexpr void __cordl_internal_set_m_Datastore(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_m_HostContext(::System::Object*  value) ;

constexpr void __cordl_internal_set_m_IsCorrelationMgr(bool  value) ;

constexpr void __cordl_internal_set_m_RemotingData(::System::Runtime::Remoting::Messaging::CallContextRemotingData*  value) ;

constexpr void __cordl_internal_set_m_SecurityData(::System::Runtime::Remoting::Messaging::CallContextSecurityData*  value) ;

/// @brief Method .ctor, addr 0xa1b12e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1b12e8, size 0x344, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Type* getStaticF_s_callContextType() ;

/// @brief Method get_Datastore, addr 0xa1b162c, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Hashtable* get_Datastore() ;

/// @brief Method get_HasInfo, addr 0xa1a28dc, size 0x60, virtual false, abstract: false, final false
inline bool get_HasInfo() ;

/// @brief Method get_HasUserData, addr 0xa1b19e4, size 0x2c, virtual false, abstract: false, final false
inline bool get_HasUserData() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_s_callContextType(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogicalCallContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogicalCallContext(LogicalCallContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogicalCallContext(LogicalCallContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6280};

/// @brief Field m_Datastore, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___m_Datastore;

/// @brief Field m_RemotingData, offset: 0x18, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::CallContextRemotingData*  ___m_RemotingData;

/// @brief Field m_SecurityData, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::CallContextSecurityData*  ___m_SecurityData;

/// @brief Field m_HostContext, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___m_HostContext;

/// @brief Field m_IsCorrelationMgr, offset: 0x30, size: 0x1, def value: None
 bool  ___m_IsCorrelationMgr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_Datastore) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_RemotingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_SecurityData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_HostContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Messaging::LogicalCallContext, ___m_IsCorrelationMgr) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Remoting::Messaging::LogicalCallContext) == 0x38, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
