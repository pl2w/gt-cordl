#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/StoreDepartment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/Store/zzzz__StoreDisplay_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StoreDepartment)
// Forward declare root types
namespace GorillaNetworking::Store {
class StoreDepartment;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::StoreDepartment*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::StoreDepartment*, "GorillaNetworking.Store", "StoreDepartment");
// Dependencies GorillaNetworking.Store.StoreDisplay, UnityEngine.MonoBehaviour
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.StoreDepartment
class CORDL_TYPE StoreDepartment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Displays, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Displays, put=__cordl_internal_set_Displays)) ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>>  Displays;

/// @brief Field departmentName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_departmentName, put=__cordl_internal_set_departmentName)) ::StringW  departmentName;

/// @brief Method FindAllDisplays, addr 0x5cb2034, size 0x154, virtual false, abstract: false, final false
inline void FindAllDisplays() ;

static inline ::GorillaNetworking::Store::StoreDepartment* New_ctor() ;

constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>> const& __cordl_internal_get_Displays() const;

constexpr ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>>& __cordl_internal_get_Displays() ;

constexpr ::StringW const& __cordl_internal_get_departmentName() const;

constexpr ::StringW& __cordl_internal_get_departmentName() ;

constexpr void __cordl_internal_set_Displays(::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>>  value) ;

constexpr void __cordl_internal_set_departmentName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5cb2188, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreDepartment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreDepartment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreDepartment(StoreDepartment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreDepartment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreDepartment(StoreDepartment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4442};

/// @brief Field Displays, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaNetworking::Store::StoreDisplay>>  ___Displays;

/// @brief Field departmentName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___departmentName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::StoreDepartment, ___Displays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::StoreDepartment, ___departmentName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::StoreDepartment) == 0x30, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
