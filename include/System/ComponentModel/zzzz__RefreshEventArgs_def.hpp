#pragma once
// IWYU pragma private; include "System/ComponentModel/RefreshEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(RefreshEventArgs)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventArgs;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::RefreshEventArgs*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::RefreshEventArgs*, "System.ComponentModel", "RefreshEventArgs");
// Dependencies System.EventArgs
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.RefreshEventArgs
class CORDL_TYPE RefreshEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_ComponentChanged)) ::System::Object*  ComponentChanged;

 __declspec(property(get=get_TypeChanged)) ::System::Type*  TypeChanged;

/// @brief Field <ComponentChanged>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ComponentChanged_k__BackingField, put=__cordl_internal_set__ComponentChanged_k__BackingField)) ::System::Object*  _ComponentChanged_k__BackingField;

/// @brief Field <TypeChanged>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TypeChanged_k__BackingField, put=__cordl_internal_set__TypeChanged_k__BackingField)) ::System::Type*  _TypeChanged_k__BackingField;

static inline ::System::ComponentModel::RefreshEventArgs* New_ctor(::System::Object*  componentChanged) ;

static inline ::System::ComponentModel::RefreshEventArgs* New_ctor(::System::Type*  typeChanged) ;

constexpr ::System::Object* const& __cordl_internal_get__ComponentChanged_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__ComponentChanged_k__BackingField() ;

constexpr ::System::Type* const& __cordl_internal_get__TypeChanged_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__TypeChanged_k__BackingField() ;

constexpr void __cordl_internal_set__ComponentChanged_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__TypeChanged_k__BackingField(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xad692c8, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  componentChanged) ;

/// @brief Method .ctor, addr 0xad69360, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  typeChanged) ;

/// [CompilerGenerated]
/// @brief Method get_ComponentChanged, addr 0xad693d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_ComponentChanged() ;

/// [CompilerGenerated]
/// @brief Method get_TypeChanged, addr 0xad693dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_TypeChanged() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RefreshEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RefreshEventArgs(RefreshEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RefreshEventArgs(RefreshEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10223};

/// [CompilerGenerated]
/// @brief Field <ComponentChanged>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____ComponentChanged_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TypeChanged>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____TypeChanged_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::RefreshEventArgs, ____ComponentChanged_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::RefreshEventArgs, ____TypeChanged_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::RefreshEventArgs) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
