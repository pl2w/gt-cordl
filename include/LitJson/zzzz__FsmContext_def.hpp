#pragma once
// IWYU pragma private; include "LitJson/FsmContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FsmContext)
namespace LitJson {
class Lexer;
}
// Forward declare root types
namespace LitJson {
class FsmContext;
}
// Write type traits
MARK_REF_T(::LitJson::FsmContext*);
DEFINE_IL2CPP_CLASS(::LitJson::FsmContext*, "LitJson", "FsmContext");
// Dependencies System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.FsmContext
class CORDL_TYPE FsmContext : public ::System::Object {
public:
// Declarations
/// @brief Field L, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_L, put=__cordl_internal_set_L)) ::LitJson::Lexer*  L;

/// @brief Field NextState, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextState, put=__cordl_internal_set_NextState)) int32_t  NextState;

/// @brief Field Return, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Return, put=__cordl_internal_set_Return)) bool  Return;

/// @brief Field StateStack, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_StateStack, put=__cordl_internal_set_StateStack)) int32_t  StateStack;

static inline ::LitJson::FsmContext* New_ctor() ;

constexpr ::LitJson::Lexer* const& __cordl_internal_get_L() const;

constexpr ::LitJson::Lexer*& __cordl_internal_get_L() ;

constexpr int32_t const& __cordl_internal_get_NextState() const;

constexpr int32_t& __cordl_internal_get_NextState() ;

constexpr bool const& __cordl_internal_get_Return() const;

constexpr bool& __cordl_internal_get_Return() ;

constexpr int32_t const& __cordl_internal_get_StateStack() const;

constexpr int32_t& __cordl_internal_get_StateStack() ;

constexpr void __cordl_internal_set_L(::LitJson::Lexer*  value) ;

constexpr void __cordl_internal_set_NextState(int32_t  value) ;

constexpr void __cordl_internal_set_Return(bool  value) ;

constexpr void __cordl_internal_set_StateStack(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b69bd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FsmContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FsmContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FsmContext(FsmContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FsmContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FsmContext(FsmContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3839};

/// @brief Field Return, offset: 0x10, size: 0x1, def value: None
 bool  ___Return;

/// @brief Field NextState, offset: 0x14, size: 0x4, def value: None
 int32_t  ___NextState;

/// @brief Field L, offset: 0x18, size: 0x8, def value: None
 ::LitJson::Lexer*  ___L;

/// @brief Field StateStack, offset: 0x20, size: 0x4, def value: None
 int32_t  ___StateStack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LitJson::FsmContext, ___Return) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LitJson::FsmContext, ___NextState) == 0x14, "Offset mismatch!");

static_assert(offsetof(::LitJson::FsmContext, ___L) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LitJson::FsmContext, ___StateStack) == 0x20, "Offset mismatch!");

static_assert(sizeof(::LitJson::FsmContext) == 0x28, "Size mismatch!");

} // namespace end def LitJson
