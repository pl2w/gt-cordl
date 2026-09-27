#pragma once
// IWYU pragma private; include "GlobalNamespace/BundleList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BundleData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BundleList)
namespace GlobalNamespace {
struct BundleData;
}
// Forward declare root types
namespace GlobalNamespace {
class BundleList;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BundleList*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BundleList*, "", "BundleList");
// Dependencies BundleData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BundleList
class CORDL_TYPE BundleList : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsLoaded)) bool  IsLoaded;

/// @brief Field activeBundleIdx, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeBundleIdx, put=__cordl_internal_set_activeBundleIdx)) int32_t  activeBundleIdx;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<::GlobalNamespace::BundleData>  data;

/// @brief Method ActiveBundle, addr 0x574bfcc, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::BundleData ActiveBundle() ;

/// @brief Method FromJson, addr 0x574bb04, size 0x220, virtual false, abstract: false, final false
inline void FromJson(::StringW  jsonString) ;

/// @brief Method HasMothershipRewards, addr 0x574bd34, size 0xd0, virtual false, abstract: false, final false
inline bool HasMothershipRewards(::StringW  playFabItemName) ;

/// @brief Method HasSku, addr 0x574be04, size 0x8c, virtual false, abstract: false, final false
inline bool HasSku(::StringW  skuName, ::by_ref<int32_t>  idx) ;

static inline ::GlobalNamespace::BundleList* New_ctor() ;

/// @brief Method TryGetBundle, addr 0x574be90, size 0x13c, virtual false, abstract: false, final false
inline bool TryGetBundle(::StringW  idOrSku, ::by_ref<::GlobalNamespace::BundleData>  bundle) ;

constexpr int32_t const& __cordl_internal_get_activeBundleIdx() const;

constexpr int32_t& __cordl_internal_get_activeBundleIdx() ;

constexpr ::ArrayW<::GlobalNamespace::BundleData> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<::GlobalNamespace::BundleData>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_activeBundleIdx(int32_t  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<::GlobalNamespace::BundleData>  value) ;

/// @brief Method .ctor, addr 0x574c00c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLoaded, addr 0x574bd24, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLoaded() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BundleList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BundleList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BundleList(BundleList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BundleList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BundleList(BundleList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1293};

/// @brief Field activeBundleIdx, offset: 0x10, size: 0x4, def value: None
 int32_t  ___activeBundleIdx;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BundleData>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BundleList, ___activeBundleIdx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleList, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BundleList) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
