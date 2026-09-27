#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/InitializerNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__NotificationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InitializerNotification)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class InitializerNotification;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::InitializerNotification*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::InitializerNotification*, "Liv.Lck.Tablet", "InitializerNotification");
// Dependencies Liv.Lck.Tablet.NotificationType, System.Object
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.InitializerNotification
class CORDL_TYPE InitializerNotification : public ::System::Object {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Type, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Liv::Lck::Tablet::NotificationType  Type;

/// @brief Field prefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

static inline ::Liv::Lck::Tablet::InitializerNotification* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::Liv::Lck::Tablet::NotificationType const& __cordl_internal_get_Type() const;

constexpr ::Liv::Lck::Tablet::NotificationType& __cordl_internal_get_Type() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::Liv::Lck::Tablet::NotificationType  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d57bec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializerNotification() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializerNotification", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializerNotification(InitializerNotification && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializerNotification", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializerNotification(InitializerNotification const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24935};

/// [HideInInspector]
/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Type, offset: 0x18, size: 0x4, def value: None
 ::Liv::Lck::Tablet::NotificationType  ___Type;

/// @brief Field prefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::InitializerNotification, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::InitializerNotification, ___Type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::InitializerNotification, ___prefab) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::InitializerNotification) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
