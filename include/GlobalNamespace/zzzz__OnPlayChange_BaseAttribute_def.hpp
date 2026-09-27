#pragma once
// IWYU pragma private; include "GlobalNamespace/OnPlayChange_BaseAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnPlayChange_BaseAttribute)
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OnPlayChange_BaseAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnPlayChange_BaseAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnPlayChange_BaseAttribute*, "", "OnPlayChange_BaseAttribute");
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnPlayChange_BaseAttribute
class CORDL_TYPE OnPlayChange_BaseAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::GlobalNamespace::OnPlayChange_BaseAttribute* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x5b0da54, size 0x4, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::FieldInfo*  field) ;

/// @brief Method OnEnterPlay, addr 0x5b0da58, size 0x4, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::MethodInfo*  method) ;

/// @brief Method .ctor, addr 0x5b0da4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnPlayChange_BaseAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnPlayChange_BaseAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnPlayChange_BaseAttribute(OnPlayChange_BaseAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnPlayChange_BaseAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnPlayChange_BaseAttribute(OnPlayChange_BaseAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3528};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnPlayChange_BaseAttribute) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
