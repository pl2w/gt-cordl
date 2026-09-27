#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinedPrefabData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EdMeshCombinedPrefabData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GorillaTag::Rendering {
class EdMeshCombinedPrefabData;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::EdMeshCombinedPrefabData*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::EdMeshCombinedPrefabData*, "GorillaTag.Rendering", "EdMeshCombinedPrefabData");
// Dependencies System.Object
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.EdMeshCombinedPrefabData
class CORDL_TYPE EdMeshCombinedPrefabData : public ::System::Object {
public:
// Declarations
/// @brief Field combined, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_combined, put=__cordl_internal_set_combined)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  combined;

/// @brief Field disabled, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabled, put=__cordl_internal_set_disabled)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  disabled;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Method Clear, addr 0x5d558d8, size 0x4, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::GorillaTag::Rendering::EdMeshCombinedPrefabData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_combined() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_combined() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_disabled() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_disabled() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_combined(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_disabled(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// @brief Method .ctor, addr 0x5d558dc, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinedPrefabData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinedPrefabData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdMeshCombinedPrefabData(EdMeshCombinedPrefabData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinedPrefabData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdMeshCombinedPrefabData(EdMeshCombinedPrefabData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4804};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field disabled, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___disabled;

/// @brief Field combined, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___combined;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::EdMeshCombinedPrefabData, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::EdMeshCombinedPrefabData, ___disabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::EdMeshCombinedPrefabData, ___combined) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::EdMeshCombinedPrefabData) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
