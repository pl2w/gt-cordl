#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXEnabledBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXEnabledBinder_Check_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXEnabledBinder)
namespace GlobalNamespace {
struct VFXEnabledBinder_Check;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXEnabledBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXEnabledBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXEnabledBinder*, "UnityEngine.VFX.Utility", "VFXEnabledBinder");
// [AddComponentMenu("VFX/Property Binders/Enabled Binder")]
// [VFXBinder("GameObject/Enabled")]
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXEnabledBinder::Check
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXEnabledBinder
class CORDL_TYPE VFXEnabledBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
// Declarations
using Check = ::GlobalNamespace::VFXEnabledBinder_Check;

 __declspec(property(get=get_Property, put=set_Property)) ::StringW  Property;

/// @brief Field Target, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Target, put=__cordl_internal_set_Target)) ::UnityW<::UnityEngine::GameObject>  Target;

/// @brief Field check, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_check, put=__cordl_internal_set_check)) ::GlobalNamespace::VFXEnabledBinder_Check  check;

/// @brief Field m_Property, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Property, put=__cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_Property;

/// @brief Method IsValid, addr 0xb3e6fc0, size 0xa4, virtual true, abstract: false, final false
inline bool IsValid(::UnityEngine::VFX::VisualEffect*  component) ;

static inline ::UnityEngine::VFX::Utility::VFXEnabledBinder* New_ctor() ;

/// @brief Method ToString, addr 0xb3e70d8, size 0x100, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateBinding, addr 0xb3e7064, size 0x74, virtual true, abstract: false, final false
inline void UpdateBinding(::UnityEngine::VFX::VisualEffect*  component) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Target() ;

constexpr ::GlobalNamespace::VFXEnabledBinder_Check const& __cordl_internal_get_check() const;

constexpr ::GlobalNamespace::VFXEnabledBinder_Check& __cordl_internal_get_check() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property() ;

constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_check(::GlobalNamespace::VFXEnabledBinder_Check  value) ;

constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

/// @brief Method .ctor, addr 0xb3e71d8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Property, addr 0xb3e6f84, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Property() ;

/// @brief Method set_Property, addr 0xb3e6f9c, size 0x24, virtual false, abstract: false, final false
inline void set_Property(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXEnabledBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXEnabledBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXEnabledBinder(VFXEnabledBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXEnabledBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXEnabledBinder(VFXEnabledBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30060};

/// @brief Field check, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::VFXEnabledBinder_Check  ___check;

/// [VFXPropertyBinding(new[] { "System.Boolean" })]
/// [SerializeField]
/// [FormerlySerializedAs("m_Parameter")]
/// @brief Field m_Property, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_Property;

/// @brief Field Target, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder, ___check) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder, ___m_Property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder, ___Target) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXEnabledBinder) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility
