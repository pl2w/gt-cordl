#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CritterConfiguration_AnimalType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CritterIndex)
namespace GlobalNamespace {
struct CritterConfiguration_AnimalType;
}
namespace GlobalNamespace {
class CritterConfiguration;
}
namespace GlobalNamespace {
class CritterIndex_AnimalTypeMeshEntry;
}
namespace GlobalNamespace {
class CrittersRegion;
}
namespace GlobalNamespace {
template<typename T>
class WeightedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class CritterIndex;
}
namespace GlobalNamespace {
class CritterIndex_AnimalTypeMeshEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterIndex*);
MARK_REF_T(::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterIndex*, "", "CritterIndex");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*, "", "CritterIndex/AnimalTypeMeshEntry");
// [DefaultMember("Item")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterIndex
class CORDL_TYPE CritterIndex : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using AnimalTypeMeshEntry = ::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry;

 __declspec(property(get=get_Item)) ::GlobalNamespace::CritterConfiguration*  Item[];

/// @brief Field _currentConfigs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentConfigs, put=__cordl_internal_set__currentConfigs)) ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*  _currentConfigs;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::CritterIndex>  _instance;

/// @brief Field animalMeshes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_animalMeshes, put=__cordl_internal_set_animalMeshes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*  animalMeshes;

/// @brief Field critterTypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterTypes, put=__cordl_internal_set_critterTypes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>*  critterTypes;

/// @brief Method GetCritterDateTime, addr 0x55f0fa0, size 0xf4, virtual false, abstract: false, final false
static inline ::System::DateTime GetCritterDateTime() ;

/// @brief Method GetMesh, addr 0x55f0930, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> GetMesh(::GlobalNamespace::CritterConfiguration_AnimalType  animalType) ;

/// @brief Method GetRandomConfiguration, addr 0x55f0d24, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::CritterConfiguration* GetRandomConfiguration(::GlobalNamespace::CrittersRegion*  region) ;

/// @brief Method GetRandomCritterType, addr 0x55f0cbc, size 0x68, virtual false, abstract: false, final false
inline int32_t GetRandomCritterType(::GlobalNamespace::CrittersRegion*  region) ;

/// @brief Method GetValidCritterTypes, addr 0x55f0db8, size 0x1e8, virtual false, abstract: false, final false
inline ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>* GetValidCritterTypes(::GlobalNamespace::CrittersRegion*  region) ;

static inline ::GlobalNamespace::CritterIndex* New_ctor() ;

/// @brief Method OnEnable, addr 0x55f0c64, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>* const& __cordl_internal_get__currentConfigs() const;

constexpr ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*& __cordl_internal_get__currentConfigs() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>* const& __cordl_internal_get_animalMeshes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*& __cordl_internal_get_animalMeshes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>* const& __cordl_internal_get_critterTypes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>*& __cordl_internal_get_critterTypes() ;

constexpr void __cordl_internal_set__currentConfigs(::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*  value) ;

constexpr void __cordl_internal_set_animalMeshes(::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*  value) ;

constexpr void __cordl_internal_set_critterTypes(::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>*  value) ;

/// @brief Method .ctor, addr 0x55f1094, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::CritterIndex> getStaticF__instance() ;

/// @brief Method get_Item, addr 0x55f0be0, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::CritterConfiguration* get_Item(int32_t  index) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::CritterIndex>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterIndex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterIndex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterIndex(CritterIndex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterIndex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterIndex(CritterIndex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{72};

/// @brief Field animalMeshes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry*>*  ___animalMeshes;

/// @brief Field critterTypes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CritterConfiguration*>*  ___critterTypes;

/// @brief Field _currentConfigs, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::WeightedList_1<::GlobalNamespace::CritterConfiguration*>*  ____currentConfigs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterIndex, ___animalMeshes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterIndex, ___critterTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterIndex, ____currentConfigs) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterIndex) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CritterConfiguration::AnimalType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterIndex/AnimalTypeMeshEntry
class CORDL_TYPE CritterIndex_AnimalTypeMeshEntry : public ::System::Object {
public:
// Declarations
/// @brief Field animalType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_animalType, put=__cordl_internal_set_animalType)) ::GlobalNamespace::CritterConfiguration_AnimalType  animalType;

/// @brief Field mesh, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

static inline ::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry* New_ctor() ;

constexpr ::GlobalNamespace::CritterConfiguration_AnimalType const& __cordl_internal_get_animalType() const;

constexpr ::GlobalNamespace::CritterConfiguration_AnimalType& __cordl_internal_get_animalType() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr void __cordl_internal_set_animalType(::GlobalNamespace::CritterConfiguration_AnimalType  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x55f1170, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterIndex_AnimalTypeMeshEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterIndex_AnimalTypeMeshEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterIndex_AnimalTypeMeshEntry(CritterIndex_AnimalTypeMeshEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterIndex_AnimalTypeMeshEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterIndex_AnimalTypeMeshEntry(CritterIndex_AnimalTypeMeshEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{71};

/// @brief Field animalType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CritterConfiguration_AnimalType  ___animalType;

/// @brief Field mesh, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry, ___animalType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry, ___mesh) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterIndex_AnimalTypeMeshEntry) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
