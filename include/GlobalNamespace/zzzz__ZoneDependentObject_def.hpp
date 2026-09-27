#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneDependentObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZoneDependentObject)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneDependentObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneDependentObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneDependentObject*, "", "ZoneDependentObject");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneDependentObject
class CORDL_TYPE ZoneDependentObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  zones;

/// @brief Method Awake, addr 0x5dfc66c, size 0x88, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ZoneDependentObject* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5dfc784, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPlayerZoneChange, addr 0x5dfc804, size 0x178, virtual false, abstract: false, final false
inline void OnPlayerZoneChange(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::GTZone  fromZone, ::GlobalNamespace::GTZone  toZone) ;

/// @brief Method UpdateObjectState, addr 0x5dfc6f4, size 0x90, virtual false, abstract: false, final false
inline void UpdateObjectState() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* const& __cordl_internal_get_zones() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_zones(::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  value) ;

/// @brief Method .ctor, addr 0x5dfc97c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneDependentObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneDependentObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneDependentObject(ZoneDependentObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneDependentObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneDependentObject(ZoneDependentObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{506};

/// @brief Field zones, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  ___zones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneDependentObject, ___zones) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneDependentObject) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
