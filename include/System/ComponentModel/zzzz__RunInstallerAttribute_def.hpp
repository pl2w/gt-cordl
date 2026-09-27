#pragma once
// IWYU pragma private; include "System/ComponentModel/RunInstallerAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RunInstallerAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RunInstallerAttribute;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::RunInstallerAttribute*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::RunInstallerAttribute*, "System.ComponentModel", "RunInstallerAttribute");
// [AttributeUsage((System.AttributeTargets)4)]
// Dependencies System.Attribute
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.RunInstallerAttribute
class CORDL_TYPE RunInstallerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::ComponentModel::RunInstallerAttribute*  Default;

/// @brief Field No, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_No, put=setStaticF_No)) ::System::ComponentModel::RunInstallerAttribute*  No;

 __declspec(property(get=get_RunInstaller)) bool  RunInstaller;

/// @brief Field Yes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Yes, put=setStaticF_Yes)) ::System::ComponentModel::RunInstallerAttribute*  Yes;

/// @brief Field <RunInstaller>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__RunInstaller_k__BackingField, put=__cordl_internal_set__RunInstaller_k__BackingField)) bool  _RunInstaller_k__BackingField;

/// @brief Method Equals, addr 0xad6955c, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xad69604, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsDefaultAttribute, addr 0xad6960c, size 0x68, virtual true, abstract: false, final false
inline bool IsDefaultAttribute() ;

static inline ::System::ComponentModel::RunInstallerAttribute* New_ctor(bool  runInstaller) ;

constexpr bool const& __cordl_internal_get__RunInstaller_k__BackingField() const;

constexpr bool& __cordl_internal_get__RunInstaller_k__BackingField() ;

constexpr void __cordl_internal_set__RunInstaller_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xad6952c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  runInstaller) ;

static inline ::System::ComponentModel::RunInstallerAttribute* getStaticF_Default() ;

static inline ::System::ComponentModel::RunInstallerAttribute* getStaticF_No() ;

static inline ::System::ComponentModel::RunInstallerAttribute* getStaticF_Yes() ;

/// [CompilerGenerated]
/// @brief Method get_RunInstaller, addr 0xad69554, size 0x8, virtual false, abstract: false, final false
inline bool get_RunInstaller() ;

static inline void setStaticF_Default(::System::ComponentModel::RunInstallerAttribute*  value) ;

static inline void setStaticF_No(::System::ComponentModel::RunInstallerAttribute*  value) ;

static inline void setStaticF_Yes(::System::ComponentModel::RunInstallerAttribute*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunInstallerAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunInstallerAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RunInstallerAttribute(RunInstallerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunInstallerAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunInstallerAttribute(RunInstallerAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10225};

/// [CompilerGenerated]
/// @brief Field <RunInstaller>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____RunInstaller_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::RunInstallerAttribute, ____RunInstaller_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::RunInstallerAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::ComponentModel
