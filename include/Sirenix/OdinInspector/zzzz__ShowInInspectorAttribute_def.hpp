#pragma once
// IWYU pragma private; include "Sirenix/OdinInspector/ShowInInspectorAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ShowInInspectorAttribute)
// Forward declare root types
namespace Sirenix::OdinInspector {
class ShowInInspectorAttribute;
}
// Write type traits
MARK_REF_T(::Sirenix::OdinInspector::ShowInInspectorAttribute*);
DEFINE_IL2CPP_CLASS(::Sirenix::OdinInspector::ShowInInspectorAttribute*, "Sirenix.OdinInspector", "ShowInInspectorAttribute");
// [MeansImplicitUse]
// [AttributeUsage((System.AttributeTargets)32767, AllowMultiple = false, Inherited = false)]
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute
namespace Sirenix::OdinInspector {
// Is value type: false
// CS Name: Sirenix.OdinInspector.ShowInInspectorAttribute
class CORDL_TYPE ShowInInspectorAttribute : public ::System::Attribute {
public:
// Declarations
static inline ::Sirenix::OdinInspector::ShowInInspectorAttribute* New_ctor() ;

/// @brief Method .ctor, addr 0xa84e7cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShowInInspectorAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShowInInspectorAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShowInInspectorAttribute(ShowInInspectorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShowInInspectorAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShowInInspectorAttribute(ShowInInspectorAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33046};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Sirenix::OdinInspector::ShowInInspectorAttribute) == 0x10, "Size mismatch!");

} // namespace end def Sirenix::OdinInspector
