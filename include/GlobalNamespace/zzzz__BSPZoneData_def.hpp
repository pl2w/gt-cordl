#pragma once
// IWYU pragma private; include "GlobalNamespace/BSPZoneData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BSPZoneData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class BSPZoneData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BSPZoneData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BSPZoneData*, "", "BSPZoneData");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BSPZoneData
class CORDL_TYPE BSPZoneData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Priority)) int32_t  Priority;

 __declspec(property(get=get_ZoneName)) ::StringW  ZoneName;

/// @brief Field boxList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_boxList, put=__cordl_internal_set_boxList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>*  boxList;

/// @brief Field priority, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

static inline ::GlobalNamespace::BSPZoneData* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>* const& __cordl_internal_get_boxList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>*& __cordl_internal_get_boxList() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr void __cordl_internal_set_boxList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>*  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b49b54, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Priority, addr 0x5b49b2c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Priority() ;

/// @brief Method get_ZoneName, addr 0x5b49b34, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_ZoneName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BSPZoneData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BSPZoneData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BSPZoneData(BSPZoneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BSPZoneData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BSPZoneData(BSPZoneData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3734};

/// [SerializeField]
/// @brief Field priority, offset: 0x20, size: 0x4, def value: None
 int32_t  ___priority;

/// @brief Field boxList, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>*  ___boxList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BSPZoneData, ___priority) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BSPZoneData, ___boxList) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BSPZoneData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
