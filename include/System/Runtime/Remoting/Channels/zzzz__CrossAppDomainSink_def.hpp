#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Channels/CrossAppDomainSink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrossAppDomainSink)
namespace GlobalNamespace {
struct CrossAppDomainSink_ProcessMessageRes;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainSink;
}
// Write type traits
MARK_REF_T(::System::Runtime::Remoting::Channels::CrossAppDomainSink*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Remoting::Channels::CrossAppDomainSink*, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
// [MonoTODO("Handle domain unloading?")]
// Dependencies System.Object
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainSink
class CORDL_TYPE CrossAppDomainSink : public ::System::Object {
public:
// Declarations
using ProcessMessageRes = ::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes;

 __declspec(property(get=get_TargetDomainId)) int32_t  TargetDomainId;

/// @brief Field _domainID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__domainID, put=__cordl_internal_set__domainID)) int32_t  _domainID;

/// @brief Field processMessageMethod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_processMessageMethod, put=setStaticF_processMessageMethod)) ::System::Reflection::MethodInfo*  processMessageMethod;

/// @brief Field s_sinks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_sinks, put=setStaticF_s_sinks)) ::System::Collections::Hashtable*  s_sinks;

/// @brief Convert operator to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink*() noexcept;

/// @brief Method AsyncProcessMessage, addr 0xa1ae96c, size 0xc8, virtual true, abstract: false, final false
inline ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  reqMsg, ::System::Runtime::Remoting::Messaging::IMessageSink*  replySink) ;

/// @brief Method GetSink, addr 0xa1adb98, size 0x28c, virtual false, abstract: false, final false
static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(int32_t  domainID) ;

static inline ::System::Runtime::Remoting::Channels::CrossAppDomainSink* New_ctor(int32_t  domainID) ;

/// @brief Method ProcessMessageInDomain, addr 0xa1aded0, size 0x15c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CrossAppDomainSink_ProcessMessageRes ProcessMessageInDomain(::ArrayW<uint8_t>  arrRequest, ::System::Runtime::Remoting::Messaging::CADMethodCallMessage*  cadMsg) ;

/// @brief Method SendAsyncMessage, addr 0xa1aea78, size 0x10c, virtual false, abstract: false, final false
inline void SendAsyncMessage(::System::Object*  data) ;

/// @brief Method SyncProcessMessage, addr 0xa1ae17c, size 0x47c, virtual true, abstract: false, final false
inline ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage*  msgRequest) ;

/// [CompilerGenerated]
/// @brief Method <AsyncProcessMessage>b__10_0, addr 0xa1aec88, size 0x80, virtual false, abstract: false, final false
inline void _AsyncProcessMessage_b__10_0(::System::Object*  data) ;

constexpr int32_t const& __cordl_internal_get__domainID() const;

constexpr int32_t& __cordl_internal_get__domainID() ;

constexpr void __cordl_internal_set__domainID(int32_t  value) ;

/// @brief Method .ctor, addr 0xa1adea0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  domainID) ;

static inline ::System::Reflection::MethodInfo* getStaticF_processMessageMethod() ;

static inline ::System::Collections::Hashtable* getStaticF_s_sinks() ;

/// @brief Method get_TargetDomainId, addr 0xa1adec8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TargetDomainId() ;

/// @brief Convert to "::System::Runtime::Remoting::Messaging::IMessageSink"
constexpr ::System::Runtime::Remoting::Messaging::IMessageSink* i___System__Runtime__Remoting__Messaging__IMessageSink() noexcept;

static inline void setStaticF_processMessageMethod(::System::Reflection::MethodInfo*  value) ;

static inline void setStaticF_s_sinks(::System::Collections::Hashtable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrossAppDomainSink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrossAppDomainSink(CrossAppDomainSink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrossAppDomainSink(CrossAppDomainSink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6252};

/// @brief Field _domainID, offset: 0x10, size: 0x4, def value: None
 int32_t  ____domainID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::Channels::CrossAppDomainSink, ____domainID) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Remoting::Channels::CrossAppDomainSink) == 0x18, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Channels
