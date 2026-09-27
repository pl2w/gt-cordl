#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_SetNew.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnExitPlay_SetNew)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OnExitPlay_SetNew;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnExitPlay_SetNew*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnExitPlay_SetNew*, "", "OnExitPlay_SetNew");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies OnExitPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnExitPlay_SetNew
class CORDL_TYPE OnExitPlay_SetNew : public ::GlobalNamespace::OnExitPlay_Attribute {
public:
// Declarations
static inline ::GlobalNamespace::OnExitPlay_SetNew* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x5b0e4ac, size 0x16c, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

/// @brief Method .ctor, addr 0x5b0e618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnExitPlay_SetNew() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnExitPlay_SetNew", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnExitPlay_SetNew(OnExitPlay_SetNew && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnExitPlay_SetNew", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnExitPlay_SetNew(OnExitPlay_SetNew const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3540};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnExitPlay_SetNew) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
