#pragma once
// IWYU pragma private; include "System/ComponentModel/InstanceCreationEditor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InstanceCreationEditor)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class InstanceCreationEditor;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::InstanceCreationEditor*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::InstanceCreationEditor*, "System.ComponentModel", "InstanceCreationEditor");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.InstanceCreationEditor
class CORDL_TYPE InstanceCreationEditor : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Text)) ::StringW  Text;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  instanceType) ;

static inline ::System::ComponentModel::InstanceCreationEditor* New_ctor() ;

/// @brief Method .ctor, addr 0xad589cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Text, addr 0xad5898c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_Text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCreationEditor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCreationEditor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCreationEditor(InstanceCreationEditor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCreationEditor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCreationEditor(InstanceCreationEditor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10183};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::InstanceCreationEditor) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
