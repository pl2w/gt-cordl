#pragma once
// IWYU pragma private; include "GlobalNamespace/GRProgressionScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(GRProgressionScriptableObject)
namespace GlobalNamespace {
struct GRPlayer_ProgressionLevels;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRProgressionScriptableObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRProgressionScriptableObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRProgressionScriptableObject*, "", "GRProgressionScriptableObject");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRProgressionScriptableObject
class CORDL_TYPE GRProgressionScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field progressionData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressionData, put=__cordl_internal_set_progressionData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>*  progressionData;

static inline ::GlobalNamespace::GRProgressionScriptableObject* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>* const& __cordl_internal_get_progressionData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>*& __cordl_internal_get_progressionData() ;

constexpr void __cordl_internal_set_progressionData(::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>*  value) ;

/// @brief Method .ctor, addr 0x58a6960, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRProgressionScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRProgressionScriptableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRProgressionScriptableObject(GRProgressionScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRProgressionScriptableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRProgressionScriptableObject(GRProgressionScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2012};

/// [SerializeField]
/// [Header("Progression Tiers")]
/// @brief Field progressionData, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_ProgressionLevels>*  ___progressionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRProgressionScriptableObject, ___progressionData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRProgressionScriptableObject) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
