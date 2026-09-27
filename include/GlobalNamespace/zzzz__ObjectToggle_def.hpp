#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObjectToggle)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectToggle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ObjectToggle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObjectToggle*, "", "ObjectToggle");
// Dependencies System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObjectToggle
class CORDL_TYPE ObjectToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _ignoreHierarchyState, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreHierarchyState, put=__cordl_internal_set__ignoreHierarchyState)) bool  _ignoreHierarchyState;

/// @brief Field _toggled, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__toggled, put=__cordl_internal_set__toggled)) ::System::Nullable_1<bool>  _toggled;

/// @brief Field objectsToToggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToToggle, put=__cordl_internal_set_objectsToToggle)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objectsToToggle;

/// @brief Method Disable, addr 0x5a1f0f0, size 0x134, virtual false, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x5a1efbc, size 0x134, virtual false, abstract: false, final false
inline void Enable() ;

static inline ::GlobalNamespace::ObjectToggle* New_ctor() ;

/// @brief Method Toggle, addr 0x5a1ef3c, size 0x80, virtual false, abstract: false, final false
inline void Toggle(bool  initialState) ;

constexpr bool const& __cordl_internal_get__ignoreHierarchyState() const;

constexpr bool& __cordl_internal_get__ignoreHierarchyState() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__toggled() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__toggled() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_objectsToToggle() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_objectsToToggle() ;

constexpr void __cordl_internal_set__ignoreHierarchyState(bool  value) ;

constexpr void __cordl_internal_set__toggled(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_objectsToToggle(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x5a1f224, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectToggle(ObjectToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectToggle(ObjectToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2832};

/// @brief Field objectsToToggle, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___objectsToToggle;

/// [SerializeField]
/// @brief Field _ignoreHierarchyState, offset: 0x28, size: 0x1, def value: None
 bool  ____ignoreHierarchyState;

/// @brief Field _toggled, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ____toggled;

/// @brief Size padding 0x30 - 0x40 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObjectToggle, ___objectsToToggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectToggle, ____ignoreHierarchyState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObjectToggle, ____toggled) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObjectToggle) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
