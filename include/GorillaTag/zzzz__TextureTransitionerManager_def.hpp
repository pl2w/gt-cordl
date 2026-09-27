#pragma once
// IWYU pragma private; include "GorillaTag/TextureTransitionerManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TextureTransitionerManager)
namespace GorillaTag {
class TextureTransitioner;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace GorillaTag {
class TextureTransitionerManager;
}
// Write type traits
MARK_REF_T(::GorillaTag::TextureTransitionerManager*);
DEFINE_IL2CPP_CLASS(::GorillaTag::TextureTransitionerManager*, "GorillaTag", "TextureTransitionerManager");
// [ExecuteAlways]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.TextureTransitionerManager
class CORDL_TYPE TextureTransitionerManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GorillaTag::TextureTransitionerManager>  _instance_k__BackingField;

/// @brief Field components, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_components, put=setStaticF_components)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::TextureTransitioner>>*  components;

/// @brief Field matPropBlock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_matPropBlock, put=__cordl_internal_set_matPropBlock)) ::UnityEngine::MaterialPropertyBlock*  matPropBlock;

/// @brief Method Awake, addr 0x5d27910, size 0x1fc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnsureInstanceIsAvailable, addr 0x5d26fd8, size 0x1b0, virtual false, abstract: false, final false
static inline void EnsureInstanceIsAvailable() ;

/// @brief Method LateUpdate, addr 0x5d27b0c, size 0x41c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::TextureTransitionerManager* New_ctor() ;

/// @brief Method Register, addr 0x5d27600, size 0xd4, virtual false, abstract: false, final false
static inline void Register(::GorillaTag::TextureTransitioner*  component) ;

/// @brief Method Unregister, addr 0x5d27728, size 0x80, virtual false, abstract: false, final false
static inline void Unregister(::GorillaTag::TextureTransitioner*  component) ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_matPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_matPropBlock() ;

constexpr void __cordl_internal_set_matPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0x5d27f28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTag::TextureTransitionerManager> getStaticF__instance_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::TextureTransitioner>>* getStaticF_components() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5d27850, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::TextureTransitionerManager> get_instance() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GorillaTag::TextureTransitionerManager>  value) ;

static inline void setStaticF_components(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::TextureTransitioner>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5d278a8, size 0x68, virtual false, abstract: false, final false
static inline void set_instance(::GorillaTag::TextureTransitionerManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureTransitionerManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureTransitionerManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureTransitionerManager(TextureTransitionerManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureTransitionerManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureTransitionerManager(TextureTransitionerManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4623};

/// @brief Field matPropBlock, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___matPropBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::TextureTransitionerManager, ___matPropBlock) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::TextureTransitionerManager) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag
