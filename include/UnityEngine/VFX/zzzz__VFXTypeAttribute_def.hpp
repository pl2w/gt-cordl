#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXTypeAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_Usage_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXTypeAttribute)
namespace GlobalNamespace {
struct VFXTypeAttribute_Usage;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VFXTypeAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VFXTypeAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VFXTypeAttribute*, "UnityEngine.VFX", "VFXTypeAttribute");
// [AttributeUsage((System.AttributeTargets)8, AllowMultiple = false)]
// Dependencies System.Attribute, UnityEngine.VFX.VFXTypeAttribute::Usage
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VFXTypeAttribute
class CORDL_TYPE VFXTypeAttribute : public ::System::Attribute {
public:
// Declarations
using Usage = ::GlobalNamespace::VFXTypeAttribute_Usage;

/// @brief Field <name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name_k__BackingField, put=__cordl_internal_set__name_k__BackingField)) ::StringW  _name_k__BackingField;

/// @brief Field <usages>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__usages_k__BackingField, put=__cordl_internal_set__usages_k__BackingField)) ::GlobalNamespace::VFXTypeAttribute_Usage  _usages_k__BackingField;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_usages, put=set_usages)) ::GlobalNamespace::VFXTypeAttribute_Usage  usages;

static inline ::UnityEngine::VFX::VFXTypeAttribute* New_ctor(::GlobalNamespace::VFXTypeAttribute_Usage  usages, ::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__name_k__BackingField() ;

constexpr ::GlobalNamespace::VFXTypeAttribute_Usage const& __cordl_internal_get__usages_k__BackingField() const;

constexpr ::GlobalNamespace::VFXTypeAttribute_Usage& __cordl_internal_get__usages_k__BackingField() ;

constexpr void __cordl_internal_set__name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__usages_k__BackingField(::GlobalNamespace::VFXTypeAttribute_Usage  value) ;

/// @brief Method .ctor, addr 0xb3d6540, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::VFXTypeAttribute_Usage  usages, ::StringW  name) ;

/// [CompilerGenerated]
/// @brief Method get_name, addr 0xb3d6588, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// [CompilerGenerated]
/// @brief Method get_usages, addr 0xb3d6578, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::VFXTypeAttribute_Usage get_usages() ;

/// [CompilerGenerated]
/// @brief Method set_name, addr 0xb3d6590, size 0x8, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_usages, addr 0xb3d6580, size 0x8, virtual false, abstract: false, final false
inline void set_usages(::GlobalNamespace::VFXTypeAttribute_Usage  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXTypeAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXTypeAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXTypeAttribute(VFXTypeAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXTypeAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXTypeAttribute(VFXTypeAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30001};

/// [CompilerGenerated]
/// @brief Field <usages>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::VFXTypeAttribute_Usage  ____usages_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VFXTypeAttribute, ____usages_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VFXTypeAttribute, ____name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VFXTypeAttribute) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::VFX
