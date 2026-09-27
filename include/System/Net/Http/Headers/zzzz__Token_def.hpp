#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/Headers/zzzz__Token_Type_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Token)
namespace GlobalNamespace {
struct Token_Type;
}
// Forward declare root types
namespace System::Net::Http::Headers {
struct Token;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::Headers::Token);
DEFINE_IL2CPP_CLASS(::System::Net::Http::Headers::Token, "System.Net.Http.Headers", "Token");
// Dependencies System.Net.Http.Headers.Token::Type
namespace System::Net::Http::Headers {
// Is value type: true
// CS Name: System.Net.Http.Headers.Token
struct CORDL_TYPE Token {
public:
// Declarations
using Type = ::GlobalNamespace::Token_Type;

/// @brief Field Empty, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::Net::Http::Headers::Token  Empty;

 __declspec(property(get=get_EndPosition, put=set_EndPosition)) int32_t  EndPosition;

 __declspec(property(get=get_Kind)) ::GlobalNamespace::Token_Type  Kind;

 __declspec(property(get=get_StartPosition, put=set_StartPosition)) int32_t  StartPosition;

/// @brief Method ToString, addr 0xa9ee1bc, size 0x68, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xa9e5d80, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Token_Type  type, int32_t  startPosition, int32_t  endPosition) ;

static inline ::System::Net::Http::Headers::Token getStaticF_Empty() ;

/// [CompilerGenerated]
/// [IsReadOnly]
/// @brief Method get_EndPosition, addr 0xa9ee1a0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_EndPosition() ;

/// @brief Method get_Kind, addr 0xa9ee1b0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Token_Type get_Kind() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_StartPosition, addr 0xa9ee190, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartPosition() ;

/// @brief Method op_Implicit, addr 0xa9ee1b8, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Token_Type op_Implicit___GlobalNamespace__Token_Type(::System::Net::Http::Headers::Token  token) ;

static inline void setStaticF_Empty(::System::Net::Http::Headers::Token  value) ;

/// [CompilerGenerated]
/// @brief Method set_EndPosition, addr 0xa9ee1a8, size 0x8, virtual false, abstract: false, final false
inline void set_EndPosition(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_StartPosition, addr 0xa9ee198, size 0x8, virtual false, abstract: false, final false
inline void set_StartPosition(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Token() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::Token_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StartPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EndPosition_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Token(::GlobalNamespace::Token_Type  type, int32_t  _StartPosition_k__BackingField, int32_t  _EndPosition_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Token_Type  type;

/// [CompilerGenerated]
/// @brief Field <StartPosition>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _StartPosition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EndPosition>k__BackingField, offset: 0x8, size: 0x4, def value: None
 int32_t  _EndPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::Token, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, _StartPosition_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::Token, _EndPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::Net::Http::Headers::Token) == 0xc, "Size mismatch!");

} // namespace end def System::Net::Http::Headers
