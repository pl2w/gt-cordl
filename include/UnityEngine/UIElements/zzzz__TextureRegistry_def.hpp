#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureRegistry)
namespace GlobalNamespace {
struct TextureRegistry_TextureInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextureRegistry;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TextureRegistry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextureRegistry*, "UnityEngine.UIElements", "TextureRegistry");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextureRegistry
class CORDL_TYPE TextureRegistry : public ::System::Object {
public:
// Declarations
using TextureInfo = ::GlobalNamespace::TextureRegistry_TextureInfo;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityEngine::UIElements::TextureRegistry*  _instance_k__BackingField;

/// @brief Field m_FreeIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FreeIds, put=__cordl_internal_set_m_FreeIds)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  m_FreeIds;

/// @brief Field m_TextureToId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextureToId, put=__cordl_internal_set_m_TextureToId)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>,::UnityEngine::UIElements::TextureId>*  m_TextureToId;

/// @brief Field m_Textures, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Textures, put=__cordl_internal_set_m_Textures)) ::System::Collections::Generic::List_1<::GlobalNamespace::TextureRegistry_TextureInfo>*  m_Textures;

/// @brief Method Acquire, addr 0xb8c95fc, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TextureId Acquire(::UnityEngine::Texture*  tex) ;

/// @brief Method AllocAndAcquire, addr 0xb8c90f8, size 0x2b0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TextureId AllocAndAcquire(::UnityEngine::Texture*  texture, bool  dynamic) ;

/// @brief Method AllocAndAcquireDynamic, addr 0xb8c3820, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TextureId AllocAndAcquireDynamic() ;

/// @brief Method GetTexture, addr 0xb8c8f54, size 0x1a4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> GetTexture(::UnityEngine::UIElements::TextureId  id) ;

static inline ::UnityEngine::UIElements::TextureRegistry* New_ctor() ;

/// @brief Method Release, addr 0xb8c3b80, size 0x274, virtual false, abstract: false, final false
inline void Release(::UnityEngine::UIElements::TextureId  id) ;

/// @brief Method UpdateDynamic, addr 0xb8c93a8, size 0x254, virtual false, abstract: false, final false
inline void UpdateDynamic(::UnityEngine::UIElements::TextureId  id, ::UnityEngine::Texture*  texture) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>* const& __cordl_internal_get_m_FreeIds() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*& __cordl_internal_get_m_FreeIds() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>,::UnityEngine::UIElements::TextureId>* const& __cordl_internal_get_m_TextureToId() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>,::UnityEngine::UIElements::TextureId>*& __cordl_internal_get_m_TextureToId() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextureRegistry_TextureInfo>* const& __cordl_internal_get_m_Textures() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::TextureRegistry_TextureInfo>*& __cordl_internal_get_m_Textures() ;

constexpr void __cordl_internal_set_m_FreeIds(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  value) ;

constexpr void __cordl_internal_set_m_TextureToId(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>,::UnityEngine::UIElements::TextureId>*  value) ;

constexpr void __cordl_internal_set_m_Textures(::System::Collections::Generic::List_1<::GlobalNamespace::TextureRegistry_TextureInfo>*  value) ;

/// @brief Method .ctor, addr 0xb8c9764, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::TextureRegistry* getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0xb8c8efc, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::TextureRegistry* get_instance() ;

static inline void setStaticF__instance_k__BackingField(::UnityEngine::UIElements::TextureRegistry*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureRegistry(TextureRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureRegistry(TextureRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7878};

/// @brief Field maxTextures offset 0xffffffff size 0x4
static constexpr int32_t  maxTextures{static_cast<int32_t>(0x800)};

/// @brief Field m_Textures, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::TextureRegistry_TextureInfo>*  ___m_Textures;

/// @brief Field m_TextureToId, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture>,::UnityEngine::UIElements::TextureId>*  ___m_TextureToId;

/// @brief Field m_FreeIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::TextureId>*  ___m_FreeIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry, ___m_Textures) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry, ___m_TextureToId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextureRegistry, ___m_FreeIds) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TextureRegistry) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
