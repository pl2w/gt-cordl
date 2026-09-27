#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalResourceDataBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(UniversalResourceDataBase)
namespace GlobalNamespace {
struct UniversalResourceDataBase_ActiveID;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalResourceDataBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalResourceDataBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalResourceDataBase*, "UnityEngine.Rendering.Universal", "UniversalResourceDataBase");
// Dependencies UnityEngine.Rendering.ContextItem
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalResourceDataBase
class CORDL_TYPE UniversalResourceDataBase : public ::UnityEngine::Rendering::ContextItem {
public:
// Declarations
using ActiveID = ::GlobalNamespace::UniversalResourceDataBase_ActiveID;

/// @brief Field <isAccessible>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAccessible_k__BackingField, put=__cordl_internal_set__isAccessible_k__BackingField)) bool  _isAccessible_k__BackingField;

 __declspec(property(get=get_isAccessible, put=set_isAccessible)) bool  isAccessible;

/// @brief Method CheckAndGetTextureHandle, addr 0xb250964, size 0xe8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> CheckAndGetTextureHandle(::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>  handle) ;

/// @brief Method CheckAndGetTextureHandle, addr 0xb250b50, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CheckAndGetTextureHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  handle) ;

/// @brief Method CheckAndSetTextureHandle, addr 0xb250a58, size 0xf0, virtual false, abstract: false, final false
inline void CheckAndSetTextureHandle(::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>  handle, ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  newHandle) ;

/// @brief Method CheckAndSetTextureHandle, addr 0xb250c18, size 0x2c, virtual false, abstract: false, final false
inline void CheckAndSetTextureHandle(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  handle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  newHandle) ;

/// @brief Method CheckAndWarnAboutAccessibility, addr 0xb2507c4, size 0x8c, virtual false, abstract: false, final false
inline bool CheckAndWarnAboutAccessibility() ;

/// @brief Method EndFrame, addr 0xb252924, size 0x8, virtual false, abstract: false, final false
inline void EndFrame() ;

/// @brief Method InitFrame, addr 0xb252918, size 0xc, virtual false, abstract: false, final false
inline void InitFrame() ;

static inline ::UnityEngine::Rendering::Universal::UniversalResourceDataBase* New_ctor() ;

constexpr bool const& __cordl_internal_get__isAccessible_k__BackingField() const;

constexpr bool& __cordl_internal_get__isAccessible_k__BackingField() ;

constexpr void __cordl_internal_set__isAccessible_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb251110, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isAccessible, addr 0xb252908, size 0x8, virtual false, abstract: false, final false
inline bool get_isAccessible() ;

/// [CompilerGenerated]
/// @brief Method set_isAccessible, addr 0xb252910, size 0x8, virtual false, abstract: false, final false
inline void set_isAccessible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniversalResourceDataBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniversalResourceDataBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniversalResourceDataBase(UniversalResourceDataBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniversalResourceDataBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniversalResourceDataBase(UniversalResourceDataBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18401};

/// [CompilerGenerated]
/// @brief Field <isAccessible>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____isAccessible_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalResourceDataBase, ____isAccessible_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalResourceDataBase) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
