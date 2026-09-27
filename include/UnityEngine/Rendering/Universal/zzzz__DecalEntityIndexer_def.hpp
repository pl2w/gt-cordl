#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityIndexer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityIndexer)
namespace GlobalNamespace {
struct DecalEntityIndexer_DecalEntityItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntity;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalEntityIndexer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::DecalEntityIndexer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DecalEntityIndexer*, "UnityEngine.Rendering.Universal", "DecalEntityIndexer");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalEntityIndexer
class CORDL_TYPE DecalEntityIndexer : public ::System::Object {
public:
// Declarations
using DecalEntityItem = ::GlobalNamespace::DecalEntityIndexer_DecalEntityItem;

/// @brief Field m_Entities, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Entities, put=__cordl_internal_set_m_Entities)) ::System::Collections::Generic::List_1<::GlobalNamespace::DecalEntityIndexer_DecalEntityItem>*  m_Entities;

/// @brief Field m_FreeIndices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FreeIndices, put=__cordl_internal_set_m_FreeIndices)) ::System::Collections::Generic::Queue_1<int32_t>*  m_FreeIndices;

/// @brief Method Clear, addr 0xb235dd4, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method CreateDecalEntity, addr 0xb235990, size 0x184, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::DecalEntity CreateDecalEntity(int32_t  arrayIndex, int32_t  chunkIndex) ;

/// @brief Method DestroyDecalEntity, addr 0xb235b14, size 0xb0, virtual false, abstract: false, final false
inline void DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity  decalEntity) ;

/// @brief Method GetItem, addr 0xb235bc4, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::DecalEntityIndexer_DecalEntityItem GetItem(::UnityEngine::Rendering::Universal::DecalEntity  decalEntity) ;

/// @brief Method IsValid, addr 0xb235908, size 0x88, virtual false, abstract: false, final false
inline bool IsValid(::UnityEngine::Rendering::Universal::DecalEntity  decalEntity) ;

static inline ::UnityEngine::Rendering::Universal::DecalEntityIndexer* New_ctor() ;

/// @brief Method RemapChunkIndices, addr 0xb235cc0, size 0x114, virtual false, abstract: false, final false
inline void RemapChunkIndices(::System::Collections::Generic::List_1<int32_t>*  remaper) ;

/// @brief Method UpdateIndex, addr 0xb235c24, size 0x9c, virtual false, abstract: false, final false
inline void UpdateIndex(::UnityEngine::Rendering::Universal::DecalEntity  decalEntity, int32_t  newArrayIndex) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DecalEntityIndexer_DecalEntityItem>* const& __cordl_internal_get_m_Entities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DecalEntityIndexer_DecalEntityItem>*& __cordl_internal_get_m_Entities() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get_m_FreeIndices() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_m_FreeIndices() ;

constexpr void __cordl_internal_set_m_Entities(::System::Collections::Generic::List_1<::GlobalNamespace::DecalEntityIndexer_DecalEntityItem>*  value) ;

constexpr void __cordl_internal_set_m_FreeIndices(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0xb235e44, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DecalEntityIndexer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DecalEntityIndexer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DecalEntityIndexer(DecalEntityIndexer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DecalEntityIndexer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DecalEntityIndexer(DecalEntityIndexer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18338};

/// @brief Field m_Entities, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::DecalEntityIndexer_DecalEntityItem>*  ___m_Entities;

/// @brief Field m_FreeIndices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ___m_FreeIndices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer, ___m_Entities) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer, ___m_FreeIndices) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalEntityIndexer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
