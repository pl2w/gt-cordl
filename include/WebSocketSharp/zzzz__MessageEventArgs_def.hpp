#pragma once
// IWYU pragma private; include "WebSocketSharp/MessageEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageEventArgs)
namespace WebSocketSharp {
struct Opcode;
}
namespace WebSocketSharp {
class WebSocketFrame;
}
// Forward declare root types
namespace WebSocketSharp {
class MessageEventArgs;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::MessageEventArgs*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::MessageEventArgs*, "WebSocketSharp", "MessageEventArgs");
// Dependencies System.EventArgs, WebSocketSharp.Opcode
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.MessageEventArgs
class CORDL_TYPE MessageEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_RawData)) ::ArrayW<uint8_t>  RawData;

/// @brief Field _data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::StringW  _data;

/// @brief Field _dataSet, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__dataSet, put=__cordl_internal_set__dataSet)) bool  _dataSet;

/// @brief Field _opcode, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__opcode, put=__cordl_internal_set__opcode)) ::WebSocketSharp::Opcode  _opcode;

/// @brief Field _rawData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rawData, put=__cordl_internal_set__rawData)) ::ArrayW<uint8_t>  _rawData;

static inline ::WebSocketSharp::MessageEventArgs* New_ctor(::WebSocketSharp::WebSocketFrame*  frame) ;

static inline ::WebSocketSharp::MessageEventArgs* New_ctor(::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  rawData) ;

constexpr ::StringW const& __cordl_internal_get__data() const;

constexpr ::StringW& __cordl_internal_get__data() ;

constexpr bool const& __cordl_internal_get__dataSet() const;

constexpr bool& __cordl_internal_get__dataSet() ;

constexpr ::WebSocketSharp::Opcode const& __cordl_internal_get__opcode() const;

constexpr ::WebSocketSharp::Opcode& __cordl_internal_get__opcode() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__rawData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__rawData() ;

constexpr void __cordl_internal_set__data(::StringW  value) ;

constexpr void __cordl_internal_set__dataSet(bool  value) ;

constexpr void __cordl_internal_set__opcode(::WebSocketSharp::Opcode  value) ;

constexpr void __cordl_internal_set__rawData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xb977a1c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method .ctor, addr 0xb977b5c, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  rawData) ;

/// @brief Method get_RawData, addr 0xb977c5c, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method setData, addr 0xb977c74, size 0x94, virtual false, abstract: false, final false
inline void setData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageEventArgs(MessageEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageEventArgs(MessageEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30319};

/// @brief Field _data, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____data;

/// @brief Field _dataSet, offset: 0x18, size: 0x1, def value: None
 bool  ____dataSet;

/// @brief Field _opcode, offset: 0x19, size: 0x1, def value: None
 ::WebSocketSharp::Opcode  ____opcode;

/// @brief Field _rawData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____rawData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::MessageEventArgs, ____data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::MessageEventArgs, ____dataSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::MessageEventArgs, ____opcode) == 0x19, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::MessageEventArgs, ____rawData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::MessageEventArgs) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
