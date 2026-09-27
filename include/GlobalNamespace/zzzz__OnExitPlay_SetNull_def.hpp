#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_SetNull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnExitPlay_SetNull)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OnExitPlay_SetNull;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnExitPlay_SetNull*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnExitPlay_SetNull*, "", "OnExitPlay_SetNull");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies OnExitPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnExitPlay_SetNull
class CORDL_TYPE OnExitPlay_SetNull : public ::GlobalNamespace::OnExitPlay_Attribute {
public:
// Declarations
static inline ::GlobalNamespace::OnExitPlay_SetNull* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x5b0e2a8, size 0xe4, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

/// @brief Method .ctor, addr 0x5b0e38c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnExitPlay_SetNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnExitPlay_SetNull", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnExitPlay_SetNull(OnExitPlay_SetNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnExitPlay_SetNull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnExitPlay_SetNull(OnExitPlay_SetNull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3538};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnExitPlay_SetNull) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
