#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_SetNull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnEnterPlay_SetNull)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OnEnterPlay_SetNull;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnEnterPlay_SetNull*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnEnterPlay_SetNull*, "", "OnEnterPlay_SetNull");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies OnEnterPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnEnterPlay_SetNull
class CORDL_TYPE OnEnterPlay_SetNull : public ::GlobalNamespace::OnEnterPlay_Attribute {
public:
// Declarations
static inline ::GlobalNamespace::OnEnterPlay_SetNull* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x5b0da5c, size 0xe4, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

/// @brief Method .ctor, addr 0x5b0db40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnEnterPlay_SetNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_SetNull", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnEnterPlay_SetNull(OnEnterPlay_SetNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_SetNull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnEnterPlay_SetNull(OnEnterPlay_SetNull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnEnterPlay_SetNull) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
