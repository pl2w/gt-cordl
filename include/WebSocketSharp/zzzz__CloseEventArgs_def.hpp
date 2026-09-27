#pragma once
// IWYU pragma private; include "WebSocketSharp/CloseEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(CloseEventArgs)
namespace WebSocketSharp {
class PayloadData;
}
// Forward declare root types
namespace WebSocketSharp {
class CloseEventArgs;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::CloseEventArgs*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::CloseEventArgs*, "WebSocketSharp", "CloseEventArgs");
// Dependencies System.EventArgs
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.CloseEventArgs
class CORDL_TYPE CloseEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief Field _clean, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__clean, put=__cordl_internal_set__clean)) bool  _clean;

/// @brief Field _payloadData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__payloadData, put=__cordl_internal_set__payloadData)) ::WebSocketSharp::PayloadData*  _payloadData;

static inline ::WebSocketSharp::CloseEventArgs* New_ctor(::WebSocketSharp::PayloadData*  payloadData, bool  clean) ;

constexpr bool const& __cordl_internal_get__clean() const;

constexpr bool& __cordl_internal_get__clean() ;

constexpr ::WebSocketSharp::PayloadData* const& __cordl_internal_get__payloadData() const;

constexpr ::WebSocketSharp::PayloadData*& __cordl_internal_get__payloadData() ;

constexpr void __cordl_internal_set__clean(bool  value) ;

constexpr void __cordl_internal_set__payloadData(::WebSocketSharp::PayloadData*  value) ;

/// @brief Method .ctor, addr 0xb977d08, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::PayloadData*  payloadData, bool  clean) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CloseEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CloseEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CloseEventArgs(CloseEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CloseEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CloseEventArgs(CloseEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30320};

/// @brief Field _clean, offset: 0x10, size: 0x1, def value: None
 bool  ____clean;

/// @brief Field _payloadData, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::PayloadData*  ____payloadData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::CloseEventArgs, ____clean) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::CloseEventArgs, ____payloadData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::CloseEventArgs) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
