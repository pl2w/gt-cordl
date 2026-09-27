#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketReceiveResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketReceiveResult)
namespace System::Net::WebSockets {
struct WebSocketCloseStatus;
}
namespace System::Net::WebSockets {
struct WebSocketMessageType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Net::WebSockets {
class WebSocketReceiveResult;
}
// Write type traits
MARK_REF_T(::System::Net::WebSockets::WebSocketReceiveResult*);
DEFINE_IL2CPP_CLASS(::System::Net::WebSockets::WebSocketReceiveResult*, "System.Net.WebSockets", "WebSocketReceiveResult");
// Dependencies System.Net.WebSockets.WebSocketCloseStatus, System.Net.WebSockets.WebSocketMessageType, System.Nullable`1<T>, System.Object
namespace System::Net::WebSockets {
// Is value type: false
// CS Name: System.Net.WebSockets.WebSocketReceiveResult
class CORDL_TYPE WebSocketReceiveResult : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CloseStatus)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  CloseStatus;

 __declspec(property(get=get_CloseStatusDescription)) ::StringW  CloseStatusDescription;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_EndOfMessage)) bool  EndOfMessage;

 __declspec(property(get=get_MessageType)) ::System::Net::WebSockets::WebSocketMessageType  MessageType;

/// @brief Field <CloseStatusDescription>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloseStatusDescription_k__BackingField, put=__cordl_internal_set__CloseStatusDescription_k__BackingField)) ::StringW  _CloseStatusDescription_k__BackingField;

/// @brief Field <CloseStatus>k__BackingField, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__CloseStatus_k__BackingField, put=__cordl_internal_set__CloseStatus_k__BackingField)) ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  _CloseStatus_k__BackingField;

/// @brief Field <Count>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field <EndOfMessage>k__BackingField, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__EndOfMessage_k__BackingField, put=__cordl_internal_set__EndOfMessage_k__BackingField)) bool  _EndOfMessage_k__BackingField;

/// @brief Field <MessageType>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__MessageType_k__BackingField, put=__cordl_internal_set__MessageType_k__BackingField)) ::System::Net::WebSockets::WebSocketMessageType  _MessageType_k__BackingField;

static inline ::System::Net::WebSockets::WebSocketReceiveResult* New_ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage) ;

static inline ::System::Net::WebSockets::WebSocketReceiveResult* New_ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeStatusDescription) ;

constexpr ::StringW const& __cordl_internal_get__CloseStatusDescription_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__CloseStatusDescription_k__BackingField() ;

constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& __cordl_internal_get__CloseStatus_k__BackingField() const;

constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& __cordl_internal_get__CloseStatus_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EndOfMessage_k__BackingField() const;

constexpr bool& __cordl_internal_get__EndOfMessage_k__BackingField() ;

constexpr ::System::Net::WebSockets::WebSocketMessageType const& __cordl_internal_get__MessageType_k__BackingField() const;

constexpr ::System::Net::WebSockets::WebSocketMessageType& __cordl_internal_get__MessageType_k__BackingField() ;

constexpr void __cordl_internal_set__CloseStatusDescription_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__CloseStatus_k__BackingField(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  value) ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__EndOfMessage_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MessageType_k__BackingField(::System::Net::WebSockets::WebSocketMessageType  value) ;

/// @brief Method .ctor, addr 0xace86a8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage) ;

/// @brief Method .ctor, addr 0xace873c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeStatusDescription) ;

/// [CompilerGenerated]
/// @brief Method get_CloseStatus, addr 0xacf2adc, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> get_CloseStatus() ;

/// [CompilerGenerated]
/// @brief Method get_CloseStatusDescription, addr 0xacf2ae4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CloseStatusDescription() ;

/// [CompilerGenerated]
/// @brief Method get_Count, addr 0xacf2ac4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_EndOfMessage, addr 0xacf2acc, size 0x8, virtual false, abstract: false, final false
inline bool get_EndOfMessage() ;

/// [CompilerGenerated]
/// @brief Method get_MessageType, addr 0xacf2ad4, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebSockets::WebSocketMessageType get_MessageType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketReceiveResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketReceiveResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketReceiveResult(WebSocketReceiveResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketReceiveResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketReceiveResult(WebSocketReceiveResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10922};

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EndOfMessage>k__BackingField, offset: 0x14, size: 0x1, def value: None
 bool  ____EndOfMessage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MessageType>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketMessageType  ____MessageType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CloseStatus>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  ____CloseStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CloseStatusDescription>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____CloseStatusDescription_k__BackingField;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____Count_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____EndOfMessage_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____MessageType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____CloseStatus_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebSockets::WebSocketReceiveResult, ____CloseStatusDescription_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebSockets::WebSocketReceiveResult) == 0x30, "Size mismatch!");

} // namespace end def System::Net::WebSockets
