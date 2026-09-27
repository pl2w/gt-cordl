#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersSpawningData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersSpawningData)
namespace Critters::Scripts {
class CrittersSpawningData_CreatureSpawnParameters;
}
namespace GlobalNamespace {
class CritterTemplate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Critters::Scripts {
class CrittersSpawningData;
}
namespace Critters::Scripts {
class CrittersSpawningData_CreatureSpawnParameters;
}
// Write type traits
MARK_REF_T(::Critters::Scripts::CrittersSpawningData*);
MARK_REF_T(::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*);
DEFINE_IL2CPP_CLASS(::Critters::Scripts::CrittersSpawningData*, "Critters.Scripts", "CrittersSpawningData");
DEFINE_IL2CPP_CLASS(::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*, "Critters.Scripts", "CrittersSpawningData/CreatureSpawnParameters");
// Dependencies UnityEngine.MonoBehaviour
namespace Critters::Scripts {
// Is value type: false
// CS Name: Critters.Scripts.CrittersSpawningData
class CORDL_TYPE CrittersSpawningData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CreatureSpawnParameters = ::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters;

/// @brief Field SpawnParametersList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnParametersList, put=__cordl_internal_set_SpawnParametersList)) ::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>*  SpawnParametersList;

/// @brief Field templateCollection, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateCollection, put=__cordl_internal_set_templateCollection)) ::System::Collections::Generic::List_1<int32_t>*  templateCollection;

/// @brief Method GetRandomTemplate, addr 0x5dddc34, size 0x80, virtual false, abstract: false, final false
inline int32_t GetRandomTemplate() ;

/// @brief Method InitializeSpawnCollection, addr 0x5dddb1c, size 0x118, virtual false, abstract: false, final false
inline void InitializeSpawnCollection() ;

static inline ::Critters::Scripts::CrittersSpawningData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>* const& __cordl_internal_get_SpawnParametersList() const;

constexpr ::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>*& __cordl_internal_get_SpawnParametersList() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_templateCollection() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_templateCollection() ;

constexpr void __cordl_internal_set_SpawnParametersList(::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>*  value) ;

constexpr void __cordl_internal_set_templateCollection(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5dddcb4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersSpawningData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersSpawningData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersSpawningData(CrittersSpawningData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersSpawningData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersSpawningData(CrittersSpawningData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5116};

/// @brief Field SpawnParametersList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters*>*  ___SpawnParametersList;

/// @brief Field templateCollection, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___templateCollection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Critters::Scripts::CrittersSpawningData, ___SpawnParametersList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersSpawningData, ___templateCollection) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Critters::Scripts::CrittersSpawningData) == 0x30, "Size mismatch!");

} // namespace end def Critters::Scripts
// Dependencies System.Object
namespace Critters::Scripts {
// Is value type: false
// CS Name: Critters.Scripts.CrittersSpawningData/CreatureSpawnParameters
class CORDL_TYPE CrittersSpawningData_CreatureSpawnParameters : public ::System::Object {
public:
// Declarations
/// @brief Field ChancesToSpawn, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ChancesToSpawn, put=__cordl_internal_set_ChancesToSpawn)) int32_t  ChancesToSpawn;

/// @brief Field StartingIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartingIndex, put=__cordl_internal_set_StartingIndex)) int32_t  StartingIndex;

/// @brief Field Template, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Template, put=__cordl_internal_set_Template)) ::UnityW<::GlobalNamespace::CritterTemplate>  Template;

static inline ::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ChancesToSpawn() const;

constexpr int32_t& __cordl_internal_get_ChancesToSpawn() ;

constexpr int32_t const& __cordl_internal_get_StartingIndex() const;

constexpr int32_t& __cordl_internal_get_StartingIndex() ;

constexpr ::UnityW<::GlobalNamespace::CritterTemplate> const& __cordl_internal_get_Template() const;

constexpr ::UnityW<::GlobalNamespace::CritterTemplate>& __cordl_internal_get_Template() ;

constexpr void __cordl_internal_set_ChancesToSpawn(int32_t  value) ;

constexpr void __cordl_internal_set_StartingIndex(int32_t  value) ;

constexpr void __cordl_internal_set_Template(::UnityW<::GlobalNamespace::CritterTemplate>  value) ;

/// @brief Method .ctor, addr 0x5dddd3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersSpawningData_CreatureSpawnParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersSpawningData_CreatureSpawnParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersSpawningData_CreatureSpawnParameters(CrittersSpawningData_CreatureSpawnParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersSpawningData_CreatureSpawnParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersSpawningData_CreatureSpawnParameters(CrittersSpawningData_CreatureSpawnParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5115};

/// @brief Field Template, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterTemplate>  ___Template;

/// @brief Field ChancesToSpawn, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ChancesToSpawn;

/// [HideInInspector]
/// @brief Field StartingIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___StartingIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters, ___Template) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters, ___ChancesToSpawn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters, ___StartingIndex) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Critters::Scripts::CrittersSpawningData_CreatureSpawnParameters) == 0x20, "Size mismatch!");

} // namespace end def Critters::Scripts
