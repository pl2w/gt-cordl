#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_SetNew.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnEnterPlay_SetNew)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OnEnterPlay_SetNew;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnEnterPlay_SetNew*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnEnterPlay_SetNew*, "", "OnEnterPlay_SetNew");
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies OnEnterPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnEnterPlay_SetNew
class CORDL_TYPE OnEnterPlay_SetNew : public ::GlobalNamespace::OnEnterPlay_Attribute {
public:
// Declarations
static inline ::GlobalNamespace::OnEnterPlay_SetNew* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x5b0dd3c, size 0x16c, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

/// @brief Method .ctor, addr 0x5b0dea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnEnterPlay_SetNew() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_SetNew", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnEnterPlay_SetNew(OnEnterPlay_SetNew && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_SetNew", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnEnterPlay_SetNew(OnEnterPlay_SetNew const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnEnterPlay_SetNew) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
