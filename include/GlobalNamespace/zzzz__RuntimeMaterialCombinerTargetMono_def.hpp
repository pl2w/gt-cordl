#pragma once
// IWYU pragma private; include "GlobalNamespace/RuntimeMaterialCombinerTargetMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSerializableDict_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RuntimeMaterialCombinerTargetMono)
// Forward declare root types
namespace GlobalNamespace {
class RuntimeMaterialCombinerTargetMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RuntimeMaterialCombinerTargetMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RuntimeMaterialCombinerTargetMono*, "", "RuntimeMaterialCombinerTargetMono");
// Dependencies GTSerializableDict`2<TKey, TValue>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RuntimeMaterialCombinerTargetMono
class CORDL_TYPE RuntimeMaterialCombinerTargetMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_matSlot_to_texProp_to_texGuid, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_matSlot_to_texProp_to_texGuid, put=__cordl_internal_set_m_matSlot_to_texProp_to_texGuid)) ::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*>  m_matSlot_to_texProp_to_texGuid;

/// @brief Method Awake, addr 0x569aa40, size 0x4c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::RuntimeMaterialCombinerTargetMono* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*> const& __cordl_internal_get_m_matSlot_to_texProp_to_texGuid() const;

constexpr ::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*>& __cordl_internal_get_m_matSlot_to_texProp_to_texGuid() ;

constexpr void __cordl_internal_set_m_matSlot_to_texProp_to_texGuid(::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x569aa8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMaterialCombinerTargetMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMaterialCombinerTargetMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMaterialCombinerTargetMono(RuntimeMaterialCombinerTargetMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMaterialCombinerTargetMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMaterialCombinerTargetMono(RuntimeMaterialCombinerTargetMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{907};

/// [HideInInspector]
/// @brief Field m_matSlot_to_texProp_to_texGuid, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTSerializableDict_2<::StringW,::StringW>*>  ___m_matSlot_to_texProp_to_texGuid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RuntimeMaterialCombinerTargetMono, ___m_matSlot_to_texProp_to_texGuid) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RuntimeMaterialCombinerTargetMono) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
