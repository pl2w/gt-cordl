#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/DropEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DropEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class DropEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "DropEventArgs");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Transformers.DropEventArgs
class CORDL_TYPE DropEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field <selectExitEventArgs>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectExitEventArgs_k__BackingField, put=__cordl_internal_set__selectExitEventArgs_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  _selectExitEventArgs_k__BackingField;

 __declspec(property(get=get_selectExitEventArgs, put=set_selectExitEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  selectExitEventArgs;

static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* const& __cordl_internal_get__selectExitEventArgs_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*& __cordl_internal_get__selectExitEventArgs_k__BackingField() ;

constexpr void __cordl_internal_set__selectExitEventArgs_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  value) ;

/// @brief Method .ctor, addr 0xb459460, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_selectExitEventArgs, addr 0xb459450, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* get_selectExitEventArgs() ;

/// [CompilerGenerated]
/// @brief Method set_selectExitEventArgs, addr 0xb459458, size 0x8, virtual false, abstract: false, final false
inline void set_selectExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DropEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DropEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DropEventArgs(DropEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropEventArgs(DropEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11394};

/// [CompilerGenerated]
/// @brief Field <selectExitEventArgs>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  ____selectExitEventArgs_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs, ____selectExitEventArgs_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Transformers
