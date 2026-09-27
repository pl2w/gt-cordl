#pragma once
// IWYU pragma private; include "Unity/Cinemachine/HideIfNoComponentAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(HideIfNoComponentAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Cinemachine {
class HideIfNoComponentAttribute;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::HideIfNoComponentAttribute*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::HideIfNoComponentAttribute*, "Unity.Cinemachine", "HideIfNoComponentAttribute");
// Dependencies UnityEngine.PropertyAttribute
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.HideIfNoComponentAttribute
class CORDL_TYPE HideIfNoComponentAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field ComponentType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComponentType, put=__cordl_internal_set_ComponentType)) ::System::Type*  ComponentType;

static inline ::Unity::Cinemachine::HideIfNoComponentAttribute* New_ctor(::System::Type*  type) ;

constexpr ::System::Type* const& __cordl_internal_get_ComponentType() const;

constexpr ::System::Type*& __cordl_internal_get_ComponentType() ;

constexpr void __cordl_internal_set_ComponentType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xaeb35e8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideIfNoComponentAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideIfNoComponentAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideIfNoComponentAttribute(HideIfNoComponentAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideIfNoComponentAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideIfNoComponentAttribute(HideIfNoComponentAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22291};

/// @brief Field ComponentType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___ComponentType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::HideIfNoComponentAttribute, ___ComponentType) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::HideIfNoComponentAttribute) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
